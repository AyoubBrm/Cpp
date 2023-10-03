#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <string>
#include <fstream>

class File
{
    std::string temp;
    std::string in_file;
    std::string out_file;
    int i;
    public:
    File();
    ~File();
    void file_txt(std::string name_file, std::string s1, std::string s2);
};
#endif