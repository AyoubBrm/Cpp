#include "File.hpp"

File::File()
{

}
File::~File()
{

}

void File::file_txt(std::string name_file, std::string s1, std::string s2)
{
    std::ifstream read_file(name_file);
    if (read_file.good() && read_file.is_open())
    {
        std::ofstream write_file(name_file + ".replace");
        while(getline(read_file, temp))
        {
            if (in_file.empty())
                in_file.append(temp);
            else
                in_file.append("\n").append(temp);
        }
        while (true)
        {
            this->i = in_file.find(s1);
            if (this->i < 0)
                break;
            in_file.erase(i, s1.size());
            in_file.insert(i, s2);
        }
        if (write_file.is_open())
        {
            std::cerr << name_file + ".replace " << "File created successfully" << std::endl;
            write_file << in_file.c_str();
        }
        else
            std::cerr << "File not created!" << std::endl;
    }
    else
        std::cerr << "This file named " << name_file << " isn't exist";
    return ;
}