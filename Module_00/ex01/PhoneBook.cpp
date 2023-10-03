#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{

};
PhoneBook::~PhoneBook()
{
    
};

void PhoneBook::print_contcat(int i)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string darkest_secret;
    std::string phone_number;
    first_name = contacts[i].get_firstname(first_name);
    last_name = contacts[i].get_lastname(last_name);
    nick_name = contacts[i].get_nickname(nick_name);
    phone_number = contacts[i].get_phone_number(phone_number);
    darkest_secret =  contacts[i].get_darkestsecret(darkest_secret);
    if (first_name.empty() && last_name.empty() && nick_name.empty())
    {
        std::cout << "Sorry Emty Info At Index " << i + 1 << " !!" << std::endl;
        return ;
    }
    std::cout << "First_name is: ";
    std::cout << first_name << std::endl;
    std::cout << "Last_name is: ";
    std::cout << last_name << std::endl;    
    std::cout << "Nick_name is: ";
    std::cout << nick_name << std::endl;
    std::cout << "Phone_number is: ";
    std::cout << phone_number << std::endl;
    std::cout << "Darkest_secret is: ";
    std::cout << darkest_secret << std::endl;
}
void PhoneBook::showprompt(int i)
{
    if (i == 0)
        std::cout << "👋 Welcomme To The Phone Book 👋" << std::endl;
    std::cout << "Please Enter Command 'ADD'🤳 |or| 'SEARCH' 🕵️  |or| 'EXIT'->🚪:😎: ";
}
void PhoneBook::init(int i)
{
    i = i % 8;
    contacts[i].add();
}
void PhoneBook::search_for_contact(int i) 
{
    int  x = 0;
    int  y = 0;
    if (contacts[0].check_if_there() == true)
        return;
    this->contacts->draw_list_table();
    if (i > 8)
        i = 8;
    while (x < i)
    {
        contacts[x].print_info(x);
        x++;
    }
    while (y == 0)
        y = contacts[0].search();
    print_contcat(y - 1);
}

