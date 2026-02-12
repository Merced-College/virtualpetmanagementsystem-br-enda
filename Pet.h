#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>

class Pet {
private:
    std::string name;
    std::string species;
    int age;
    int hungerLevel; // 0 (full) to 10 (starving)

public:
    // Constructors
    Pet();
    Pet(const std::string& name, const std::string& species, int age, int hungerLevel);

    // Virtual destructor for polymorphic deletion
    virtual ~Pet();

    // Accessors
    std::string getName() const;
    std::string getSpecies() const;
    int getAge() const;
    int getHungerLevel() const;

    // Mutators
    void setName(const std::string& name);
    void setSpecies(const std::string& species);
    void setAge(int age);
    void setHungerLevel(int level);

    // Virtual methods so derived types can override behavior
    virtual void printInfo() const;
    virtual void makeSound() const;
};

#endif
