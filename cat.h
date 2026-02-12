#ifndef CAT_H
#define CAT_H

#include "Pet.h"
#include <string>

class Cat : public Pet {
private:
    std::string favoriteToy; // Unique attribute

public:
    // Constructor
    Cat(const std::string& name, const std::string& species,
        int age, int hungerLevel, const std::string& favoriteToy);

    // Destructor
    ~Cat();

    // Override functions
    void printInfo() const override;
    void makeSound() const override;
};

#endif
