#include <stdio.h>
#include <cs50.h>

int main() {
    string name = "";
    float price = 0.0;
    int units = 0;
    float cost = 0.0;

    name = get_string("Item name? ");
    price = get_float("%s price? ", name);
    units = get_int("%s units? ", name);
    cost = price * units;

    printf("cost of %i unit(s) of %s: Rs. %.2f\n", units, name, cost);
    return 0;
}