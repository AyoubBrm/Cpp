#include "iostream"

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringSTR = string;
    
    std::cout << &string << "  :  ";
    std::cout << string << std::endl;
  
    std::cout << stringPTR << "  :  ";
    std::cout << *stringPTR << std::endl;
  
    std::cout << &stringSTR << "  :  ";
    std::cout << stringSTR << std::endl;
    
}