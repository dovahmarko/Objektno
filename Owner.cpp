#include "Owner.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Owner::Owner(const std::string& name) : name(name) {}

Owner::Owner(const Owner& other) : name(other.name), pets(other.pets) {}

void Owner::addPet(const VirtualPet& pet) {
    pets.push_back(pet);
}

void Owner::performActions() {
    for (auto& pet : pets) {
        int action = rand() % 3; // Random number between 0 and 2
        switch (action) {
            case 0: pet.eat(); break;
            case 1: pet.play(); break;
            case 2: pet.sleep(); break;
        }
    }
}

VirtualPet& Owner::getHappiestPet() {
    VirtualPet* happiestPet = &pets[0];
    for (auto& pet : pets) {
        if (pet.getHappiness() > happiestPet->getHappiness()) {
            happiestPet = &pet;
        }
    }
    return *happiestPet;
}

void Owner::showPets() const {
    for (const auto& pet : pets) {
        std::cout << pet.getHappiness() << " ";
    }
    std::cout << std::endl;
}
