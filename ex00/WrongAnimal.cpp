#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "none";
    std::cout << "WrongAnimal default constructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    type = other.type;
    std::cout << "WrongAnimal copy constructor called.\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
        type = other.type;
    std::cout << "WrongAnymal copy assigned operator called.\n";
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<"Destructor WrongAnimal called.\n";
}


std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Sound from Wrong Animal.\n";
}