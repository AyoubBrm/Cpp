#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    string temp_csv;
    string temp_txt;
    string data_csv;
    string input_txt;
    if (ac == 2)
    {
        string argv = av[1];
        if (argv != "my_data.csv")
        {
            std::cerr << "invalid arg.\n"; 
            return (0);
        }
        std::ifstream file_csv("data.csv");
        std::ifstream file_txt(av[1]);
        if (file_csv.is_open())
        {
            while (std::getline(file_csv, temp_csv))
                data_csv.append(temp_csv).append("\n");
            while (std::getline(file_txt, temp_txt))
                input_txt.append(temp_txt).append("\n");
            Stordata(data_csv, input_txt);
        }
    }
    else
        std::cerr << "invalid arg.\n"; 
}