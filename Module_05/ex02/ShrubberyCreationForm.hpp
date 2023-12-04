#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string> 
#include "AForm.hpp" 
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class ShrubberyCreationForm : public AForm
{
    public:
        // default constructer aras l9lwa o seti sign l ->false fl constructers aras l9lwa
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& op);
    void    draw_tree() const;
    void    execute(Bureaucrat const & executor) const;
};
#endif