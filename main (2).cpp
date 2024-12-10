#include "Owner.h"
#include <iostream>
#include <vector>

int main() {
    srand(time(0));  // Initialize random number generator

    // Create some pets
    VirtualPet pet1("Rex", "Dog");
    VirtualPet pet2("Fluffy", "Cat");
    VirtualPet pet3("Buddy", "Rabbit");

    // Create owners
    Owner owner1("Alice");
    Owner owner2("Bob");

    // Add pets to owners
    owner1.addPet(pet1);
    owner1.addPet(pet2);

    owner2.addPet(pet3);

    // Perform actions
    owner1.performActions();
    owner2.performActions();

    // Show pets happiness after actions
    std::cout << "Owner 1's happiest pet: " << owner1.getHappiestPet().getHappiness() << std::endl;
    std::cout << "Owner 2's happiest pet: " << owner2.getHappiestPet().getHappiness() << std::endl;

    // Copy owner1 to owner3
    Owner owner3 = owner1;
    std::cout << "Owner 3's happiest pet after copying: " << owner3.getHappiestPet().getHappiness() << std::endl;

    return 0;
}
