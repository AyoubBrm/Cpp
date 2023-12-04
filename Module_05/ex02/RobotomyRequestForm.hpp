#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include <iostream>
#include <string> 
#include "AForm.hpp" 
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>

class Bureaucrat;
class RobotomyRequestForm : public AForm
{
    public:
        // default constructer aras l9lwa o seti sign l ->false fl constructers aras l9lwa
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(RobotomyRequestForm& op);
        void    execute(Bureaucrat const & executor) const;
};
#endif