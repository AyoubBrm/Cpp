#include "Contact.hpp"

Contact::Contact()
{

};
Contact::~Contact()
{

};

void Contact::add(void)
    {
        std::cout << "Enter The first_name: ";
        std::getline(std::cin , first_name);
        std::cout << "Enter The last_name: ";
        std::getline(std::cin , last_name);
        std::cout << "Enter The nick_name: ";
        std::getline(std::cin , nick_name);
        std::cout << "Enter The phone_number: ";
        std::getline(std::cin , phone_number);
        std::cout << "Enter The darkest_secret: ";
        std::getline(std::cin , darkest_secret);
    }
    std::string Contact::get_firstname(std::string fristname)
    {
        fristname = first_name;
        return fristname;
    }
    std::string Contact::get_lastname(std::string lastname)
    {
        lastname = last_name;
        return last_name;
    }
    std::string Contact::get_nickname(std::string nickname)
    {
        nickname = nick_name;
        return nickname;
    }
    std::string Contact::get_phone_number(std::string phonenumber)
    {
        phonenumber = phone_number;
        return phonenumber;
    }
    std::string Contact::get_darkestsecret(std::string darkestsecret)
    {
        darkestsecret = darkest_secret;
        return darkestsecret;
    }
   
   bool Contact::check_if_there()
   {
        if (first_name.empty() && last_name.empty() && nick_name.empty())
        {
            std::cout << "There Is No Contact 👥!!" << std::endl;
            return (true);
        }
        return (false);
   }
    void Contact::draw_list_table()
    {
        std::cout << " _______________________________________________"  << std::endl;
        std::cout << "|  Index | Frist name | Last name  | Nick name  |" << std::endl;
        std::cout << "|--------|------------|------------|------------|" << std::endl;
    }
    void Contact::print_char(std::string str)
    {
        int    space;
        int    squre = 12;
        if (str.length() > 10)
            std::cout << " " << str.substr(0 , 10) + '.' << "|";
        else if (str.length() >= 0 && str.length() < 10)
        {
           space = squre - str.length();
            while (space--  > 0)
                std::cout << " ";
           std::cout << str;
            std::cout << "|";
        }
    }
    int Contact::search()
    {
        char i;
        std::cout << std::endl;
        std::cout << "Enter the index from 1 to 8 🙂: ";
        std::cin >> i;
        if (i > '8' || i <= '0')
        {
            std::cout << "Sorry The Index Is Invalid 🤔!";
            return (0);
        }ZombieZombieZombie
        std::cin.ignore();
        return (std::atoi(&i));
    }
    void Contact::print_info(int i)
    {
        std::cout << "|       " << i + 1 << "|";
        print_char(first_name);
        print_char(last_name);
        print_char(nick_name);
        std::cout << std::endl;
        std::cout << "|--------|------------|------------|------------|";
        std::cout << std::endl;
    }
    