#include "Dog.h"
#include <iostream>

// Default dog
Dog::Dog()
    : Pet("Unnamed Dog", "Dog", 0, 5), breed("Unknown") {}

Dog::Dog(const std::string& name, int age, int hungerLevel, const std::string& breed)
    : Pet(name, "Dog", age, hungerLevel), breed(breed) {}

std::string Dog::getBreed() const { return breed; }

void Dog::setBreed(const std::string& b) { breed = b; }

void Dog::printInfo() const {
    Pet::printInfo();
    std::cout << "Breed: " << breed << std::endl;
}

void Dog::makeSound() const { std::cout << getName() << " barks: Woof!" << std::endl; }
