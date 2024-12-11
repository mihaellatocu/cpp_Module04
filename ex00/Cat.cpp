#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat constructor called.\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    type = other.type;
    std::cout << "Cat copy constructor called.\n";
}

Cat Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assigned operator called.\n";
    if (this != &other)
        type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat class.\n";
}

void Cat::makeSound() const 
{
    std::cout << "Miawwww\n";
}

