#ifndef OWNER_H
#define OWNER_H

#include "VirtualPet.h"
#include <vector>

class Owner {
private:
    std::string name;
    std::vector<VirtualPet> pets;

public:
    Owner(const std::string& name);
    Owner(const Owner& other); // Copy constructor

    void addPet(const VirtualPet& pet);
    void performActions();  // Performs random actions on all pets

    VirtualPet& getHappiestPet();
    void showPets() const;
};

#endif
