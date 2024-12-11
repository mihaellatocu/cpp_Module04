#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "wrongCat";
    std::cout << "WrongCat default constructor called.\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal (other)
{
    type = other.type;
    std::cout << "WrongCat copy constructor called.\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat copy assign operator called.\n";
    if (this != &other)
        type = other.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat class.\n";
}

void WrongCat::makeSound() const
{
    std::cout << "WrongSound from a WrongCat.\n";
}
