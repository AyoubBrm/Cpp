#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
class PhoneBook
{
    private:
        Contact contacts[8];
        void print_contcat(int i);

    public:
        PhoneBook();
        ~PhoneBook();
    void showprompt(int i);
    void init(int i);
    void search_for_contact(int i);
};
#endif