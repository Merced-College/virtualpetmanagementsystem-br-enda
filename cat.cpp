#include "Cat.h"
#include <iostream>

// Constructor using Pet initializer list
Cat::Cat(const std::string& name, const std::string& species,
         int age, int hungerLevel, const std::string& favoriteToy)
    : Pet(name, species, age, hungerLevel), favoriteToy(favoriteToy) {}

// Destructor
Cat::~Cat() {}

// Override printInfo
void Cat::printInfo() const {
    Pet::printInfo();
    std::cout << "Favorite Toy: " << favoriteToy << std::endl;
}

// Override makeSound
void Cat::makeSound() const {
    std::cout << getName() << " meows." << std::endl;
}
