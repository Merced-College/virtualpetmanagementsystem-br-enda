// Name: Brenda Romero
// Course: CPSC-25-12703
// Date: 2/12/2026

#include <iostream>
#include <vector>

#include "Pet.h"
#include "Dog.h"
#include "Parrot.h"

int main() {
    // Create a collection of Pet pointers to demonstrate polymorphism
    std::vector<Pet*> pets;

    // Derived Dog
    pets.push_back(new Dog("Rex", 3, 6, "German Shepherd"));

    // Derived Parrot (original pet type)
    pets.push_back(new Parrot("Polly", 4, 3, 25));

    // Base Pet instance
    pets.push_back(new Pet("Whiskers", "Cat", 2, 4));

    std::cout << "--- Pet Info ---\n";

    for (Pet* p : pets) {
        p->printInfo();   // virtual dispatch
        p->makeSound();   // virtual dispatch
        std::cout << std::endl;
    }

    // Cleanup
    for (Pet* p : pets) delete p;

    return 0;
}
