#include <stdio.h>
#include <cs50.h>

int main() {
    string name = "";
    float price = 0.0;
    int units = 0;
    float cost = 0.0;
    char yesno = 'y';

    do {
        name = get_string("Item name? ");
        price = get_float("%s price? ", name);
        units = get_int("%s units? ", name);
        cost = price * units;
        printf("cost of %i unit(s) of %s: Rs. %.2f\n", units, name, cost);

        yesno = get_char("Do you want to buy another item? ");
    } while(yesno == 'y');

    return 0;
}