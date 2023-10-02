#ifndef AANIMAL_CLASS_HPP
#define AANIMAL_CLASS_HPP

#include "Colors.h"
#include <iostream>
#include <string>

class AAnimal {
  public:
    AAnimal(AAnimal const &src);
    virtual ~AAnimal(void);
    // ~AAnimal(void);

    AAnimal &operator=(AAnimal const &src);

    virtual void makeSound(void) const = 0;

  protected:
    AAnimal(void);
    std::string _type;
};

#endif
