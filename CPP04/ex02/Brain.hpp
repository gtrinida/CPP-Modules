#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
protected:
    int index;
public:
    Brain();
    Brain(const Brain &brain);
    ~Brain();

    Brain& operator=(const Brain& src);
    std::string ideas[100];
};

#endif