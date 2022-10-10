#include <stdio.h>
#define PI 3.14

int main(int argc, char const *argv[])
{
    int a = 8;
    float b = 7.3;
    // printf("Hello World\n");

    // PI = 7.33; // cann't do this because PI is a contant.

    // (.5) ka matlab hai ki point(.) ke baad 5 digit add kar dega.
    // printf("%.5f\n", b);

    // printf("%8.4f\n", b);
    // printf("%-8.4f this\n", b); // (-8) ka matlab hai ki last me eight digit ka space.

    // Escape sequences

    printf("tab character \t, my backslah \\n. value of PI: %f ", PI);
    printf("Sound of windows is \a");
    return 0;
}
