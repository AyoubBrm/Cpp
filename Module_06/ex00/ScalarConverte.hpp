#ifndef SXALARCONVERTE_HPP
#define SXALARCONVERTE_HPP
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>

class ScalarConverte;
class ScalarConverte
{
    private:
        int convertint;
        double convertdouble;
        double convertfloat;
        char convertchar;
    public:
        ScalarConverte();
        ~ScalarConverte();
        ScalarConverte(const ScalarConverte &copy);
        ScalarConverte& operator=(const ScalarConverte& op);
        void static charconvert(ScalarConverte& a, std::string str, const char *temp, char *p);
        void static intconvert(ScalarConverte& a, std::string str, const char *temp, char *p);
        void static floatconvert(ScalarConverte& a, const char *temp, char *p);
        void static doubleconvert(ScalarConverte& a, const char *temp, char *p);
        void static convert(std::string str);
};
#endif