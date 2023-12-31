#ifndef ICE_MATERIA_CLASS_HPP
#define ICE_MATERIA_CLASS_HPP

#include "./AMateria.hpp"

class Ice : public AMateria {
  public:
    Ice(void);
    Ice(Ice const &src);
    ~Ice(void);

    Ice &operator=(Ice const &src);

    AMateria *clone(void) const;
    void use(ICharacter &target);
};

#endif
