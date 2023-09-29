#include <iostream>
#include <fstream>
#include <cstring>

int main()
{
    std::ifstream myfile ("txt.txt");
    std::string txt;
    std::string txt2;
    std::string txt3;
    std::string a = "ayoub";
    std::string b = "bouram";
    int i = 0;
    if (myfile.is_open())
    {
        while (myfile.good())
        {
           txt = myfile.get();
            if (!std::isalpha(txt[0]) && !std::isalnum(txt[0])
                && txt[0] != ' ' && txt[0] != '\t' && txt[0] != '\n')
                  break;
            std::append
            i = txt2.find(a);
            if (i >= 0)
            {
                txt3.copy((char *)txt2.c_str(), i);
                std::cout << txt3;
                break;
            }
        
        }
    }
    // int  i = 0;

//    while (1)
//    {

//         i = txt2.find(a);
//         if(i >= 0)
//         { 
//             txt.clear();
//             txt.append(b);
//         }
//         else 
//             break;
//    }
//     std::cout << txt;
}