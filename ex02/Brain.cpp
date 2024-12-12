#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor.\n";
}
Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; i++)
        ideas[i]= other.ideas[i];
    std::cout << "Brain copy constructor.\n";
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    std::cout << "Brain copy assign operator.\n";
    return *this;  
}

Brain::~Brain()
{
    std::cout << "Destructor for Brain class.\n";
}