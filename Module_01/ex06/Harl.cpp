#include "Harl.hpp"

Harl::Harl()
{

}    
Harl::~Harl()
{

}

void Harl::debug( void ){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info( void ){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void ){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error( void ){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::complain( std::string level)
{
    std::string how[4] = {"debug", "info", "warning", "error"};
    int i = 0;
    while (!how[i].empty())
    {
        if (how[i] == level)
        {
            switch(i)
            {
                case 0:
                    debug();
                case 1:
                    info();
                case 2:
                    warning();
                case 3:
                    error(); 
            }   
            break;
        }
        i++;
    }
}