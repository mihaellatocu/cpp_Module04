#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    brain_dog = new Brain();
    std::cout << BOLD_BLUE << this->getType()<<RST " constructor called.\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    type = other.type; // Animal::operator=(other)
    brain_dog = new Brain(*other.brain_dog);
    std::cout << "Dog copy constructor.\n";
}

Dog Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assign operator.\n";
    if (this != &other)
    {
        type = other.type;
        delete brain_dog;
        brain_dog = new Brain(*other.brain_dog);
    }
    return *this;
}

Dog::~Dog()
{
    delete brain_dog;
    std::cout << "Destructor for " BOLD_BLUE << this->getType()<<RST " class.\n";
}

void Dog::makeSound() const
{
    std::cout << "Ham ham\n";
}
