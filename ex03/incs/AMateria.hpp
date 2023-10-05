#ifndef AMATERIA_CLASS_HPP
#define AMATERIA_CLASS_HPP

#include "./Colors.h"
#include "./ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;

class AMateria {
  public:
    AMateria(AMateria const &src);
    AMateria(std::string const &type);
    virtual ~AMateria(void);

    AMateria &operator=(AMateria const &src);

    std::string const &getType(void) const;
    virtual AMateria *clone(void) const = 0;
    virtual void use(ICharacter &target);

  protected:
    AMateria(void);
    std::string _type;
};

#endif
