#include "AForm.hpp"
AForm::AForm() 
    : name( "Default" ), sign( 0 ), grade_to_sign( 0 ), grade_to_execute( 0 )
{
    if (this->grade_to_sign < 1)
        throw GradeTooHighException();
    else if (this->grade_to_sign > 150)
        throw GradeTooLowException();
}

AForm::AForm(std::string name, const int grade_sign_form, const int grade_execute_form)
    : name( name ), grade_to_sign( grade_sign_form ), grade_to_execute( grade_execute_form )
{
    if (this->grade_to_sign < 1)
        throw GradeTooHighException();
    else if (this->grade_to_sign > 150)
        throw GradeTooLowException();
}

AForm::AForm(std::string name, bool sign, const int grade_sign_form, const int grade_execute_form)
    : name( name ), sign( sign ), grade_to_sign( grade_sign_form ), grade_to_execute( grade_execute_form )
{
    if (this->grade_to_sign < 1)
        throw GradeTooHighException();
    else if (this->grade_to_sign > 150)
        throw GradeTooLowException();
}

AForm::AForm(AForm &copy)
    : name(copy.name), grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute)
{
    *this = copy;
}

AForm& AForm::operator=(AForm& op)
{
    this->sign = op.sign;
    return (*this);
}

std::string AForm::get_name() const
{
    return (this->name);
}

int AForm::get_bool() const
{
    return (this->sign);
}

int AForm::get_grade_to_sign() const
{
    return (this->grade_to_sign);
}

int AForm::get_grade_to_execute() const
{
    return (this->grade_to_execute);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}

bool AForm::beSigned(Bureaucrat& me)
{
    if (me.getGrade() <= this->grade_to_sign)
        this->sign = true;
    else
        throw GradeTooLowException();
    return (this->sign);
}

std::ostream& operator<<(std::ostream & COUT, AForm& op)
{
    COUT << "Info Of Form : " << "sign => " << op.get_bool() << ". type of Form => " << op.get_name()
        << ". grade of execute => " << op.get_grade_to_execute() << ". grade of sign => " << op.get_grade_to_sign();
    return (COUT);
}

AForm::~AForm()
{

}