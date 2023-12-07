#ifndef NAME_PART_HPP
#define NAME_PART_HPP

#include <vector>
#include <string>

class NamePart {
protected:
    std::vector<std::string> elements;

public:
    std::string getRandomElement();
};

#endif // NAME_PART_HPP
