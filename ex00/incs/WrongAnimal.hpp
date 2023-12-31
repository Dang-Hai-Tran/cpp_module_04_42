#ifndef WRONG_ANIMAL_CLASS_HPP
#define WRONG_ANIMAL_CLASS_HPP

#include "./Colors.h"
#include <iostream>
#include <string>

class WrongAnimal {
  public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &src);
    WrongAnimal(std::string const &type);
    virtual ~WrongAnimal(void);

    WrongAnimal &operator=(WrongAnimal const &src);

    std::string const &getType(void) const;
    void makeSound(void) const;

  protected:
    std::string _type;
};

#endif
