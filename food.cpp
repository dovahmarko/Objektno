#include "Food.h"
#include <iostream>

int Food::counter = 0;

Food::Food() {
    counter++;
}

Food::~Food() {
    counter--;
}

void Food::change_counter(int delta) {
    counter += delta;
}

void Food::print_counter() {
    std::cout << counter << std::endl;
}

int get_counter() {
    return Food::counter;
}
