#ifndef DOG_H
#define DOG_H

#include "Pet.h"
#include <string>

class Dog : public Pet {
private:
    std::string breed; // New attribute

public:
    // Constructor
    Dog(const std::string& name, const std::string& species,
        int age, int hungerLevel, const std::string& breed);

    // Destructor
    ~Dog();

    // Override functions
    void printInfo() const override;
    void makeSound() const override;
};

#endif
