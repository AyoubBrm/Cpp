#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Brain";
    std::cout << "Brian Default Constractor is called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brian Destractor is called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
    *this = copy;
}

Brain& Brain::operator=(const Brain& op)
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = op.ideas[i];
    return (*this);
}