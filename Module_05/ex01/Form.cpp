#include "Form.hpp"

Form::Form() 
    : name( "Default" ), sign( 0 ), grade_to_sign( 0 ), grade_to_execute( 0 )
{
    if (this->grade_to_sign < 1)
        throw GradeTooHighException();
    else if (this->grade_to_sign > 150)
        throw GradeTooLowException();
}

Form::Form(std::string name, bool sign, const int grade_sign_form, const int grade_execute_form)
    : name( name ), sign( sign ), grade_to_sign( grade_sign_form ), grade_to_execute( grade_execute_form )
{
    if (this->grade_to_sign < 1)
        throw GradeTooHighException();
    else if (this->grade_to_sign > 150)
        throw GradeTooLowException();
}

Form::Form(Form &copy) : name(copy.name), grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute)
{
    *this = copy;
}

Form& Form::operator=(Form& op)
{
    this->sign = op.sign;
    return (*this);
}

std::string Form::get_name()
{
    return (this->name);
}

int Form::get_bool()
{
    return (this->sign);
}

int Form::get_grade_to_sign()
{
    return (this->grade_to_sign);
}

int Form::get_grade_to_execute()
{
    return (this->grade_to_execute);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}

bool Form::beSigned(Bureaucrat& me)
{
    if (me.getGrade() <= this->grade_to_sign)
        this->sign = true;
    else
        throw GradeTooLowException();
    return (this->sign);
}

std::ostream& operator<<(std::ostream & COUT, Form& op)
{
    COUT << "Info Of Form : " << "sign => " << op.get_bool() << ". type of Form => " << op.get_name()
        << ". grade of execute => " << op.get_grade_to_execute() << ". grade of sign => " << op.get_grade_to_sign();
    return (COUT);
}

Form::~Form()
{

}