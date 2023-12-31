#ifndef IMATERIASOURCE_CLASS_HPP
#define IMATERIASOURCE_CLASS_HPP

#include "./AMateria.hpp"

class IMateriaSource {
  public:
    virtual ~IMateriaSource(void) {}

    virtual void learnMateria(AMateria *m) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
