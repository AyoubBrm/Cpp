#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    :AForm(target, 0, 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& copy)
    : AForm(copy)
{
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& op)
{
    (void)op;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->get_grade_to_execute())
        throw AForm::GradeTooLowException();
    if (this->get_bool() == false)
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << "HHHHHHHHHHHHHHIIIIIIIIIIII\n";
        srand((unsigned int) time(NULL));
        if (rand() % 50 == 0)
            std::cout << this->get_name() << " has been robotomized successfully 50%\n";
        else
             std::cout << "the robotomy failed. \n";      
    }   
}