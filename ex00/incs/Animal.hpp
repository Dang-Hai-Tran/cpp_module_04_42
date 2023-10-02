#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include "Colors.h"
#include <iostream>
#include <string>

class Animal {
  public:
    Animal(void);
    Animal(Animal const &src);
    Animal(std::string const &type);
    virtual ~Animal(void);

    Animal &operator=(Animal const &src);

    std::string const &getType(void) const;
    virtual void makeSound(void) const;

  protected:
    std::string _type;
};

#endif
