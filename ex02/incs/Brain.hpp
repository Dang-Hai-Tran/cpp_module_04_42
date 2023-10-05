#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP

#include "./Colors.h"
#include <iostream>
#include <string>

class Brain {
  public:
    Brain(void);
    Brain(Brain const &src);
    ~Brain(void);

    Brain &operator=(Brain const &src);

    std::string const &getIdea(int index) const;
    void setIdea(int index, std::string const &idea);

    static int const nb_ideas = 100;

  private:
    std::string _ideas[nb_ideas];
};

#endif
