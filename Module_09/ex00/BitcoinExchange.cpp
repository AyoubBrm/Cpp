#include "BitcoinExchange.hpp"
#include <sstream>
#include <list>
void calculatorOfdata(std::list<std::pair<string, std::string> > map ,std::map<std::string, double> mapcsv)
{
   std::list<std::pair<string, std::string> >::iterator it = map.begin();
   for (; it != map.end(); it++)
   {}
   if (it == map.end())
      it--;
   std::map<std::string, double>::iterator itm = mapcsv.lower_bound(it->first);
   if (itm->first == it->first)
      std::cout << it->first << " " << it->second << " => " << itm->second * std::atof(it->second.c_str()) << std::endl;
   else if (mapcsv.begin()->first < it->first)
   {
      itm--;
      std::cout << it->first << " " << it->second << " => " << itm->second * std::atof(it->second.c_str()) << std::endl;
   }
   else
      std::cerr << "This emelent isn't in your DB\n";
}
int checkformat(std::string &key, std::string &value)
{
   int i = 0;
   while (key[i] && (key[i] == ' ' || key[i] == '\t'))
            i++;
   key.erase(0, i);
   if (key.substr(0, 4) == "date")
   {
      i += 4;
      while (key[i] && key[i] == ' ')
         i++;
      if (key[i])
      {
         std::cerr << "Error : bad input invalid format => " << key << std::endl;
         return 1;
      }
      else
      {
         i = 0;
         while(value[i] == ' ')
            i++;
         value.erase(0 ,i);
         if (value.substr(0, 5) == "value")
         {
            i += 5;
            while(value[i] == ' ')
               i++;
            if (value[i])
            {
               std::cerr << "Error : bad input invalid format => " << value << std::endl;
               return 1;
            }
         }
         else
         {
            std::cerr << "Error : bad input invalid format => " << value << std::endl;
            return 1;
         }
      }
   }
   else
   {
      std::cerr << "Error : bad input invalid format => " << key << std::endl;
      return 1;
   }
   key.clear();
   value.clear();
   return 0;
}

void stordatamap(std::string file_csv, std::map<std::string, double> &mapcsv)
{
   file_csv.erase(0, file_csv.find("\n") + 1);
   std::stringstream split(file_csv);
   for(std::string line; std::getline(split, line, '\n'); )
   {
      line.append("\n");
      std::string strkey = line.substr(0, file_csv.find(','));
      line.erase(0, line.find(',') + 1);
      std::string strvalue = line.substr(0, line.find('\n'));
      line.clear();
      mapcsv[strkey] = std::atof(strvalue.c_str());
   }
}

std::string checknumbervalue(std::string key, std::string value)
{
   int i = 0;
   int j = 0;

   if (value.empty())
   {
      std::cerr << "Error : bad input => " << key << " | " << value << std::endl;
      return ("\0");
   }
   while (value[i] && value[i] == ' ')
      i++;
   value.erase(0, i);
   i = 0;
   if (value[i] == '-')
      i++;
   if (isnumber(value[i]))
   {
      while (value[i] && isnumber(value[i]))
         i++;
      if (value[i] == '.')
      {
         i++;
         if (!isnumber(value[i]))
         {
            std::cerr << "Error : bad input => " << key << " | " << value << std::endl;
            return ("\0");
         }
      }
      while (value[i] && isnumber(value[i]))
         i++;
      j = i;
      while (value[i] && value[i] == ' ')
         i++;
      if (value[i])
      {
         std::cerr << "Error : bad input => " << key << " | " << value << std::endl;
         return ("\0");
      }
      else
         value.erase(j, i);
   }
   else
   {
      std::cerr << "Error : bad input => " << key << " | " << value << std::endl;
      return ("\0");
   }
   return (value);
}

int Checknumberkey(std::string key)
{
   double value = 0;
   for (unsigned int i = 0; i < key.length(); i++)
   {
      if (!isnumber(key[i]) && key[i] != '-')
      {
         std::cerr << "Error: bad input => " << key << std::endl;
         return (0);
      }
   }
   key.erase(0, key.find('-') + 1);
   std::string temp = key.substr(0, key.find('-'));
   value = std::atoi(temp.c_str());
   if (value > 12 || value == 0)
   {
      std::cerr << "Invalid Data Month : Most be 1 to 12\n";
      return (0);
   }
   key.erase(0, key.find('-') + 1);
   temp = key.substr(0, 2);
   value = std::atof(temp.c_str());
   if (value == 0 || value > 31)
   {
      std::cerr << "Invalid Data Day : Most be 1 to 31\n";
      return (0);
   }
   return (1);
}

void Stordata(std::string file_csv, std::string file_txt)
{
   std::stringstream split(file_txt);
   std::list<std::pair<string, std::string> > map;
   std::map<std::string, double> mapcsv;
   std::map<string, std::string>::iterator it;
   std::string key;
   std::string value;
   int i = 0;
   int j = 0;

   if (file_txt.empty())
   {
      std::cerr << "Error : Empty File \n";
      return;
   }
   for (std::string each; std::getline(split, each, '\n'); j++)
   {
      i = each.find('|');
      if (i >= 0)
      {
         key = each.substr(0, i);
         if (key.empty())
         {
            std::cerr << "empty date .." << std::endl;
            continue;
         }
      }
      if (i >= 0)
         value = each.substr(i + 1, each.length());
      if (j == 0)
      {
         if (checkformat(key, value))
            return ;
      }
      else if (i < 0)
      {
         key = each.substr(0, each.length());
         value[0] = '\0';
         map.push_back(std::make_pair(key, value));
         std::cerr << "Error : bad input => " << key << std::endl;
         key.clear();
         each.clear();
         i = key.length();
      }
      for (unsigned int i = 0; i < key.length(); i++)
      {
         while (key[i] && (key[i] == ' ' || key[i] == '\t'))
            i++;
         if (key[i] != ' ')
         {
            key.erase(0, i);
            i = 4;
            while (key[i] == '-')
            {
               i += 3;
               if (key[i] != '-')
               {
                  i -= 3;
                  break;
               }
            }
            if (i != 7 || key[i + 3] != ' ' || !isnumber(key[0]))
               std::cerr << "Error : bad input => " << key << std::endl;
            else
            {
               i += 3;
               j = i;
               while (key[i] == ' ')
                  i++;
               if (key[i])
                  std::cerr << "Error : bad input => " << key << std::endl;
               else
               {
                  key.erase(j , key.length());
                  i = Checknumberkey(key);
                  if (i == 1)
                  {
                     value = checknumbervalue(key , value);
                     if (value.empty())
                        break;
                     if (std::atof(value.c_str()) < 0)
                     {
                        std::cerr << "Error: not a positive number" << std::endl;
                        break;
                     }
                     else if (std::atof(value.c_str()) >= 1000)
                     {
                        std::cerr << "Error: too large a number." << std::endl;
                        break;
                     }
                     map.push_back(std::make_pair(key, value));
                     stordatamap(file_csv, mapcsv);
                     calculatorOfdata(map, mapcsv);
                  }
               }
            }
            i = key.length();
         }
         else
            std::cerr << "Error : bad input => " << key << std::endl;
      }
      each.clear();
      key.clear();
   }  
}