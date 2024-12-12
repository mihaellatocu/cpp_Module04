#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
  //Animal* a = new Animal();
  //a->getType();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  
  j->makeSound();
  i->makeSound(); 
  
  Animal* animals[5]; 
  for (int i = 0; i < 5; i++)
  {
    if (i < 5)
       animals[i] = new Cat();
    else
      animals[i] = new Dog();
  }

  for (int i = 0; i < 5; i++)
  {
    animals[i]->makeSound();
  }

 
  std::cout <<BOLD_YELLOW "[Destructors: ]\n" RST; 
 
  delete i;
  delete j;
  for (int i = 0; i < 5; i++)
    delete animals[i];
  return (0);
}
