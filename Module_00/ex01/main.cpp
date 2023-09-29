#include "Contact.hpp"
#include "PhoneBook.hpp"

int main (void)
{
    PhoneBook phone;
    std::string str;
    int i = 0;
    while (str.compare("EXIT"))
    {
        if (std::cin.eof())
        {
            std::cout << std::endl;
            break;
        }
        phone.showprompt(i);
        std::getline(std::cin, str);
        if (str.compare("ADD") == 0)
        {
            phone.init(i);
                i++;
        }
        else if (str.compare("SEARCH") == 0)
        {
            phone.search_for_contact(i);
        }
    }
    return (0);
}