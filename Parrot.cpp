#include "Parrot.h"

Parrot::Parrot()
    : Pet("Unnamed Parrot", "Parrot", 0, 5), vocabularySize(0) {}

Parrot::Parrot(const std::string& name, int age, int hungerLevel, int vocabularySize)
    : Pet(name, "Parrot", age, hungerLevel), vocabularySize(vocabularySize) {}

int Parrot::getVocabularySize() const { return vocabularySize; }

void Parrot::setVocabularySize(int v) { if (v >= 0) vocabularySize = v; }

void Parrot::printInfo() const {
    Pet::printInfo();
    std::cout << "Vocabulary Size: " << vocabularySize << " words" << std::endl;
}

void Parrot::makeSound() const {
    std::cout << getName() << " squawks and mimics words (" << vocabularySize << ")" << std::endl;
}
