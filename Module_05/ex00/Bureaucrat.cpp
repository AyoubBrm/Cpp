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

std::string Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade()
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
        return "to HIght";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
        return "to Low";
}

std::ostream& operator<<(std::ostream& COUT,  Bureaucrat& op)
{
    COUT << op.getName() << ", bureaucrat grade " << op.getGrade();
    return COUT;
}

Bureaucrat::~Bureaucrat()
{}