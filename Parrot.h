#ifndef PARROT_H
#define PARROT_H

#include "Pet.h"
#include <string>

class Parrot : public Pet {
private:
    int vocabularySize; // number of words it can mimic

public:
    Parrot();
    Parrot(const std::string& name, int age, int hungerLevel, int vocabularySize);

    int getVocabularySize() const;
    void setVocabularySize(int v);

    // Overrides
    void printInfo() const override;
    void makeSound() const override;
};

#endif
