#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    :AForm(target, 0, 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& copy)
    : AForm(copy)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& op)
{
    (void)op;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->get_grade_to_execute())
        throw AForm::GradeTooLowException();
    if (this->get_bool() == false)
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << this->get_name() << " has been pardoned by Zaphod Beeblebrox. \n";
    }   
}