#include "File.hpp"

int main()
{
    File file;
    std::string file_name;
    std::string s1;
    std::string s2;
    std::cout << "Enter Name Of The File : ";
    std::cin >> file_name;
    std::cout << "Enter the string s1 : ";
    std::cin >> s1;
    std::cout << "Enter the string s2 : ";
    std::cin >> s2;
    file.file_txt(file_name, s1, s2);
}