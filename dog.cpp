#include "Dog.h"
#include <iostream>

// Constructor using Pet initializer list
Dog::Dog(const std::string& name, const std::string& species,
         int age, int hungerLevel, const std::string& breed)
    : Pet(name, species, age, hungerLevel), breed(breed) {}

// Destructor
Dog::~Dog() {}

// Override printInfo
void Dog::printInfo() const {
    Pet::printInfo();
    std::cout << "Breed: " << breed << std::endl;
}

// Override makeSound
void Dog::makeSound() const {
    std::cout << getName() << " barks." << std::endl;
}
