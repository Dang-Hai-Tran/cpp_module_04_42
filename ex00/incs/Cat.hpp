#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.hpp"

class Cat : public Animal {
  public:
    Cat(void);
    Cat(Cat const &src);
    ~Cat(void);

    Cat &operator=(Cat const &src);

    void makeSound(void) const;
};

#endif
