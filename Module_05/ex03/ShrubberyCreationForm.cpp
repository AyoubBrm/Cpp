
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm(target, 0, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& copy)
    : AForm(copy)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& op)
{
    (void)op;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::draw_tree() const
{
    std::ofstream file;
    file.open (this->get_name() + "_shrubbery");
    if (file.is_open())
    {
        file << "                 # #### ####\n";
        file << "               ### \\/#|### |/####\n";
        file << "              ##\\/#/ \\||/##/_/##/_#\n";
        file << "            ###  \\/###|/ \\/ # ###\n";
        file << "          ##_\\_#\\_\\## | #/###_/_####\n";
        file << "         ## #### # \\ #| /  #### ##/##\n";
        file << "           __#_--###`  |{,###---###-~\n";
        file << "                    \\ }{\n";
        file << "                      }}{\n";
        file << "                      }}{\n";
        file << "                 ejm  {{}\n";
        file << "                , -=-~{ .-^- _\n";
        file << "                      `}\n";
        file << "                       {\n";
    }
    else
        std::cerr << "this file isn't exist \n";

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > this->get_grade_to_execute())
        throw AForm::GradeTooLowException();
    if (this->get_bool() == false)
        throw AForm::GradeTooLowException();
    else 
        draw_tree();
    return;
}
