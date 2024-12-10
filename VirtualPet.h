#ifndef VIRTUAL_PET_H
#define VIRTUAL_PET_H

#include <string>

class VirtualPet {
private:
    std::string name;
    std::string species;
    int hungerPoints;
    int happinessPoints;
    bool isAwake;

public:
    VirtualPet(const std::string& name, const std::string& species);
    void eat();
    void sleep();
    void play();
    int getHappiness() const;
    int getHunger() const;
    bool isAsleep() const;
    void wakeUp();
};

#endif
