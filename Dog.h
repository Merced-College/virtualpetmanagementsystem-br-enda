#ifndef DOG_H
#define DOG_H

#include "Pet.h"
#include <string>

class Dog : public Pet {
private:
    std::string breed;

public:
    Dog();
    Dog(const std::string& name, int age, int hungerLevel, const std::string& breed);

    std::string getBreed() const;
    void setBreed(const std::string& b);

    // Overrides
    void printInfo() const override;
    void makeSound() const override;
};

#endif
