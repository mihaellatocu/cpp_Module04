#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  meta->makeSound();
    

  const WrongAnimal* meta2 = new WrongAnimal();
  const WrongAnimal* i2 = new WrongCat();
  std::cout << i2->getType() << " type " << std::endl;
  i2->makeSound(); //will output the cat sound!
  meta2->makeSound();
   
  delete j;
  delete i;
  delete meta;
  delete i2;
  delete meta2;
  

  return (0);
}
