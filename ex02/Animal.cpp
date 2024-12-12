#include "Animal.hpp"

Animal::Animal()
{
    type = "none";
    std::cout << "Animal default constructor called.\n";
}

Animal::Animal(const Animal& other)
{
    type = other.type;
    std::cout << "Animal copy constructor called.\n";
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal copy assign constructor.\n";
    if (this != &other)
        type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor for Animal class.\n";
    std::cout << "-------------------------------\n";
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "Animal will never make a sound. This function is not supposed to be used\n";
}