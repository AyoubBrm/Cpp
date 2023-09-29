#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <limits>

class Contact
{
    private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string darkest_secret;
    std::string   phone_number;

    public:
    Contact();
    ~Contact();
    void add(void);
    std::string get_firstname(std::string fristname);
    std::string get_lastname(std::string lastname);
    std::string get_nickname(std::string nickname);
    std::string get_phone_number(std::string phonenumber);
    std::string get_darkestsecret(std::string darkestsecret);
    bool check_if_there(void);
    void draw_list_table(void);
    void print_char(std::string str);
    int search(void);
    void print_info(int i);
};
#endif