#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // int a = 10;
    // printf("%d\n", a);

    // a = 20;
    // printf("%d\n", a);

    /* ==================== Constant ========================== */
    // const float PI = 3.14159265;
    // const char NEWLINE = '\n';

    // printf("My number is: %f%c", PI, NEWLINE);

    // printf("Hello World\n");
    // printf("%s", "Hello World");

    /* ========================== String ======================= */

    // char myString[10] = "Hello";
    // printf("%s\n", myString);

    /* ========================== Typescasting ================== */

    // int a = (int)'A';
    // printf("%d\n", a);

    // char b = (char)66;
    // printf("%c\n", b);

    // char c = (char)67.567;
    // printf("%c\n", c);

    // char myString[10] = "1788";
    // int i = atoi(myString); // convert string to int. atoi -> (i) mean int and (f) means float.
    // printf("%d\n", i + 10);

    char myString[10];
    int i = 20;
    sprintf(myString, "%d", i);
    printf("%s\n", myString);

    return 0;
}
