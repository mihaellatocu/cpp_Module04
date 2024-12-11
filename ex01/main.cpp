#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  
  j->makeSound();
  i->makeSound(); 
  
  Animal* animals[10]; 
  for (int i = 0; i < 10; i++)
  {
    if (i < 5)
       animals[i] = new Cat();
    else
      animals[i] = new Dog();
  }

  for (int i = 0; i < 10; i++)
  {
    animals[i]->makeSound();
  }

  Cat cat1;std::cout <<std::endl;
	Cat cat2(cat1);std::cout <<std::endl;
	Cat cat3;std::cout <<std::endl;
	cat3 = cat1;std::cout <<std::endl; // de verificat iesirea 
	Cat cat4 = cat1;

  std::cout <<BOLD_YELLOW "[Destructors: ]\n" RST; 
 
  delete i;
  delete j;
  for (int i = 0; i < 10; i++)
    delete animals[i];
  return (0);
}
