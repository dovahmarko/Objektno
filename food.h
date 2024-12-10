#ifndef FOOD_H
#define FOOD_H

class Food {
private:
    static int counter;

public:
    Food();
    ~Food();
    static void change_counter(int delta);
    static void print_counter();
};

int get_counter();

#endif
