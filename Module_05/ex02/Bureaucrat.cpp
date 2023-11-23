#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
: name ("Default")
{
    this->grade = 0;
}

Bureaucrat::Bureaucrat(std::string name, int grade) 
: name (name) 
{
    this->grade = grade;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();

}

Bureaucrat::Bureaucrat(Bureaucrat& copy) : name(copy.name)
{
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& op)
{
    this->grade = op.grade;
    return (*this);
}

/// @brief 
/// @return 
std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

Bureaucrat& Bureaucrat::increment()
{
    this->grade--;
    if (this->grade < 1)
    {
        this->grade++;
        throw Bureaucrat::GradeTooHighException();
    }
    return *this;
}

Bureaucrat& Bureaucrat::decrement()
{
    this->grade++;
    if (this->grade > 150)
    {
        this->grade--;
        throw Bureaucrat::GradeTooLowException();
    }
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade to HIght";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade to Low";
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::signForm(AForm& sign)
{
    try
    {
        sign.beSigned(*this);
        std::cout << this->getName() << " signed " << sign.get_name() << std::endl;
    }
    catch (std::exception &e)
    {
         std::cout << this->getName() << " couldn’t sign  " << sign.get_name() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << "the form wasn't sign " << e.what() << '\n';
    }
}

std::ostream& operator<<(std::ostream& COUT,  Bureaucrat& op)
{
    COUT << op.getName() << " bureaucrat grade " << op.getGrade();
    return COUT;
}