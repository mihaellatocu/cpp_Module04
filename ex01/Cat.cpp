#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    brain_cat = new Brain();
    std::cout << BOLD_MAGENTA << this->getType()<<RST " default constructor called.\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    type = other.type;
    brain_cat = new Brain(*other.brain_cat);
    std::cout << "Cat copy constructor called.\n";
}

Cat Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assigned operator called.\n";
    if (this != &other)
    {
        type = other.type;
        delete brain_cat;
        brain_cat = new Brain(*other.brain_cat);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destructor for " BOLD_MAGENTA << this->getType()<<RST " class.\n";
    delete brain_cat;
}

void Cat::makeSound() const 
{
    std::cout << "Miawwww\n";
}

