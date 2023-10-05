#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "./Animal.hpp"

class Dog : public Animal {
  public:
    Dog(void);
    Dog(Dog const &src);
    ~Dog(void);

    Dog &operator=(Dog const &src);

    void makeSound(void) const;
};

#endif
