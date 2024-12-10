#include "VirtualPet.h"
#include <iostream>

VirtualPet::VirtualPet(const std::string& name, const std::string& species)
    : name(name), species(species), hungerPoints(50), happinessPoints(50), isAwake(true) {}

void VirtualPet::eat() {
    if (isAwake) {
        hungerPoints -= 10;
        happinessPoints += 5;
        if (hungerPoints < 0) hungerPoints = 0;
        std::cout << name << " is eating. Hunger: " << hungerPoints << ", Happiness: " << happinessPoints << std::endl;
    } else {
        std::cout << name << " is asleep and cannot eat!" << std::endl;
    }
}

void VirtualPet::sleep() {
    if (hungerPoints <= 30) {
        isAwake = false;
        happinessPoints += 10;
        hungerPoints += 5;
        std::cout << name << " is sleeping. Happiness: " << happinessPoints << ", Hunger: " << hungerPoints << std::endl;
    } else {
        std::cout << name << " is too hungry to sleep!" << std::endl;
    }
}

void VirtualPet::play() {
    if (isAwake) {
        happinessPoints += 10;
        hungerPoints += 5;
        std::cout << name << " is playing. Happiness: " << happinessPoints << ", Hunger: " << hungerPoints << std::endl;
    } else {
        std::cout << name << " is asleep and cannot play!" << std::endl;
    }
}

int VirtualPet::getHappiness() const {
    return happinessPoints;
}

int VirtualPet::getHunger() const {
    return hungerPoints;
}

bool VirtualPet::isAsleep() const {
    return !isAwake;
}

void VirtualPet::wakeUp() {
    isAwake = true;
    std::cout << name << " has woken up!" << std::endl;
}
