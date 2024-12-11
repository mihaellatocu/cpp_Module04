#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog constructor called.\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    type = other.type;
    std::cout << "Dog copy constructor.\n";
}

Dog Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assign operator.\n";
    if (this != &other)
        type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Destructor for Dog class.\n";
}

void Dog::makeSound() const
{
    std::cout << "Ham ham\n";
}
