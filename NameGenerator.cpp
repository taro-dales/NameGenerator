#include "NameGenerator.hpp"
#include <iostream>

NameGenerator::NameGenerator() : vowelManager(), consonantManager() {}

std::string NameGenerator::generateName() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> lengthDistribution(5, 10);

    int nameLength = lengthDistribution(gen);

    std::string name;

    // First letter is a consonant
    name += toupper(consonantManager.getRandomElement());

    // Alternate between vowels and consonants
    for (int i = 1; i < nameLength; i++) {
        if (i % 2 == 0) {
            name += vowelManager.getRandomElement();
        } else {
            name += consonantManager.getRandomElement();
        }
    }

    return name;
}
