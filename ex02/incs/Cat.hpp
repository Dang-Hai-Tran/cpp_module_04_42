#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "./AAnimal.hpp"
#include "./Brain.hpp"

class Cat : public AAnimal {
  public:
    Cat(void);
    Cat(Cat const &src);
    ~Cat(void);

    Cat &operator=(Cat const &src);

    Brain *getBrain(void) const;
    void makeSound(void) const;

  private:
    Brain *_brain;
};

#endif
