#ifndef NAME_GENERATOR_HPP
#define NAME_GENERATOR_HPP

#include "VowelManager.hpp"
#include "ConsonantManager.hpp"
#include <random>
#include <string>

class NameGenerator {
private:
    VowelManager vowelManager;
    ConsonantManager consonantManager;

public:
    NameGenerator();
    std::string generateName();
};

#endif // NAME_GENERATOR_HPP
