#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Dog : public AAnimal {
  public:
    Dog(void);
    Dog(Dog const &src);
    ~Dog(void);

    Dog &operator=(Dog const &src);

    Brain *getBrain(void) const;
    void makeSound(void) const;

  private:
    Brain *_brain;
};

#endif
