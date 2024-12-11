#include "Animal.hpp"
#include "Brain.hpp" 

class Dog : public Animal
{
private:
    Brain* brain_dog;
public:
    Dog();
    Dog(const Dog& other);
    Dog operator=(const Dog& other);
    ~Dog();

    void makeSound() const;    
};



