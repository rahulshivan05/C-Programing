#include <stdio.h>

// TypeCasting syntax
// (type) value;

int main(int argc, char const *argv[])
{
    int a = 3;
    float b = (float)54 / 5;
    // Agar int aur int me Arthmetic operation hoga to int hi retturn karega.
    printf("Value of a is %d\n", a);
    // printf("Value of a is %d\n", (int)b); // here b is float that cause (b) is show 0.
    printf("Value of a is %f\n", b);
    return 0;
}
