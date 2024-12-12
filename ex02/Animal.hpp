#include <iostream>
#include <string.h>
#pragma once

#define RST "\033[0m"    /* Reset to default color */
#define BOLD "\033[1m"   /* Bold */
#define U "\033[4m"      /* Underline */
#define RED "\033[1;31m" /* Red */
#define G "\033[1;32m"   /* Green */
#define Y "\033[1;33m"   /* Yellow */
#define B "\033[1;34m"   /* Blue */
#define M "\033[1;35m"   /* Magenta */
#define C "\033[1;36m"   /* Cyan */
#define W "\033[1;37m"   /* White */

#define PINK "\033[1;95m"        /* Pink (Bright Magenta) */
#define SALMON      "\033[38;5;210m" 
#define LIGHT_CORAL "\033[1;31m" /* Light Coral */
//Bold 
# define BOLD_BLACK "\033[1m\033[30m"
# define BOLD_RED "\033[1m\033[31m"
# define BOLD_GREEN "\033[1m\033[32m"
# define BOLD_YELLOW "\033[1m\033[33m"
# define BOLD_BLUE "\033[1m\033[34m"
# define BOLD_MAGENTA "\033[1m\033[35m"
# define BOLD_CYAN "\033[1m\033[36m"
# define B_W "\033[1m\033[37m"


class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    std::string getType() const;
    virtual void makeSound() const = 0;
};


