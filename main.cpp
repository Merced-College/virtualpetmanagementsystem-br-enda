// Brenda Romero
// CPSC-25-12703
// 2/12/2026

#include <iostream>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"

int main() {

    // ===== ORIGINAL PET OBJECTS (KEPT) =====
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);

    std::cout << "Pet 1 Info:\n";
    pet1.printInfo();

    std::cout << "\nPet 2 Info:\n";
    pet2.printInfo();

    std::cout << "\nComparing pets by name: ";
    int result = pet1.compareTo(pet2);

    if (result < 0)
        std::cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    else if (result > 0)
        std::cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    else
        std::cout << "Both pets have the same name.\n";
    // ======================================


    // ===== ADDED: DOG AND CAT NORMAL OBJECT TEST =====
    std::cout << "\n\n--- Dog and Cat Object Test ---\n";

    Dog dog1("Buddy", "Dog", 4, 5, "Labrador");
    Cat cat1("Luna", "Cat", 2, 3, "Laser Pointer");

    dog1.printInfo();
    dog1.makeSound();

    std::cout << std::endl;

    cat1.printInfo();
    cat1.makeSound();
    // =================================================


    // ===== ADDED: POLYMORPHISM TEST =====
    std::cout << "\n--- Polymorphism Test ---\n";

    Pet* myDog = new Dog("Max", "Dog", 6, 4, "German Shepherd");
    Pet* myCat = new Cat("Milo", "Cat", 1, 2, "Feather Wand");

    myDog->makeSound();   // Calls Dog version
    myCat->makeSound();   // Calls Cat version

    // Clean up dynamic memory
    delete myDog;
    delete myCat;
    // ====================================


    return 0;
}
