#include "../incs/Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
    std::cout << CYAN "Ice default constructor called." RESET << std::endl;
    return;
}

Ice::Ice(Ice const &src) : AMateria("ice") {
    std::cout << CYAN "Ice copy constructor called." RESET << std::endl;
    *this = src;
    return;
}

Ice::~Ice(void) {
    std::cout << CYAN "Ice destructor called." RESET << std::endl;
    return;
}

Ice &Ice::operator=(Ice const &src) {
    std::cout << CYAN "Ice assignment operator called." RESET << std::endl;
    this->_type = src._type;
    return (*this);
}

AMateria *Ice::clone(void) const {
    AMateria *iceClone = new Ice();
    return (iceClone);
}

void Ice::use(ICharacter &target) {
    std::cout << YELLOW "* sends a frosty breeze towards " << target.getName()
              << " *" RESET << std::endl;
}
