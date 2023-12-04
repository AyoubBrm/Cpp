#include "ScalarConverte.hpp"
#include <cmath>

ScalarConverte::ScalarConverte()
{}

ScalarConverte::~ScalarConverte()
{}

void ScalarConverte::charconvert(ScalarConverte& a, std::string str, const char *temp, char *p)
{
    a.convertchar = static_cast<char>(std::strtod(temp, &p));
    if (p[0])
    {
        if (str.length() == 1)
            std::cout <<"char : " << temp[0] << std::endl;
        else if (a.convertchar && (std::isprint(a.convertchar)) && (!p[0] || (p[0] == 'f' && !p[1]))
                && static_cast<double>(std::strtod(temp, &p) - static_cast<int>(a.convertchar) == 0))
            std::cout <<"char : " << a.convertchar << std::endl;
        else
           std::cout << "char : impossible" << std::endl; 
    }
    else
    {
        if (static_cast<double>(std::strtod(temp, &p) - static_cast<int>(a.convertchar) > 0 )
            || static_cast<double>(std::strtod(temp, &p) -  static_cast<double>(a.convertchar) < 0))
                std::cout << "char : impossible" << std::endl;
        else if (std::isprint(a.convertchar))
            std::cout << "char : " << static_cast<char>(a.convertchar) << std::endl;
        else
            std::cout << "char : Non displayable" << std::endl;
    }
}

void ScalarConverte::intconvert(ScalarConverte& a, std::string str, const char *temp, char *p)
{
    a.convertint = static_cast<int>(std::strtod(temp, &p));
     if (p[0])
    {
        if (str.length() == 1 && p[0])
            std::cout <<"int : " << static_cast<int>(p[0]) << std::endl;
        else if (str.length() > 1 && (!p[0] || (p[0] == 'f' && !p[1])))
            std::cout <<"int : " << a.convertint << std::endl;
        else
           std::cout << "int : impossible" << std::endl; 
    }
    else
    {
        if (a.convertint >= std::numeric_limits<int>::max())
            std::cout << "int : impossible" << std::endl; 
        else if (a.convertint <= std::numeric_limits<int>::min())
            std::cout << "int : impossible" << std::endl; 
        else
           std::cout << "int : " << static_cast<int>(a.convertint) << std::endl;
    }
}

void ScalarConverte::floatconvert(ScalarConverte& a, const char *temp, char *p)
{
    a.convertfloat = static_cast<float>(std::strtod(temp, &p));
    if ((p[0] == 'f' && p[1] != '\0'))
        std::cout << "float : nanf" << std::endl;
    else if (p[0] && p[0] != 'f')
        std::cout << "float : nanf" << std::endl;
    else
    {
        if (a.convertfloat != floor(a.convertfloat))
            std::cout << "float : " <<  a.convertfloat << "f" << std::endl;
        else
            std::cout << "float : " <<  a.convertfloat << ".00f" << std::endl;
    }
}
void ScalarConverte::doubleconvert(ScalarConverte& a, const char *temp, char *p)
{
    a.convertdouble = static_cast<double>(std::strtod(temp, &p));
    if ((p[0] == 'f' && p[1] != '\0'))
        std::cout << "double : nan" << std::endl;
    else if (p[0] && p[0] != 'f')
        std::cout << "double : nan" << std::endl;
    else
    {
        if (a.convertdouble != floor(static_cast<double>(a.convertdouble)))   
            std::cout << "double : " << static_cast<double>(a.convertdouble) << std::endl;
        else 
            std::cout << "double : " << static_cast<double>(a.convertdouble) << ".00" << std::endl;
    }
}


void ScalarConverte::convert(std::string str)
{
    ScalarConverte a;
    const char * temp = str.c_str();
    char *p = NULL;
    charconvert(a, str, temp, p);
    intconvert(a, str, temp, p);
    floatconvert(a, temp, p);
    doubleconvert(a, temp, p);
}

ScalarConverte::ScalarConverte (const ScalarConverte& copy)
{
    *this = copy;
}
ScalarConverte& ScalarConverte::operator=(const ScalarConverte& op)
{
    this->convertchar = op.convertchar;
    this->convertdouble = op.convertdouble;
    this->convertfloat = op.convertfloat;
    this->convertint = op.convertint;
    return (*this);
}
