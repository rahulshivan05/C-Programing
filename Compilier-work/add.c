#include <stdio.h>

/*
step 1. Pre-processor -> means jo bhi comment hota ha usko remove karta hai aur macro ki define karta hai jaisa ki 'stdio.h' file ko paste karta hai wo save hota hai ".i" file ke naam se.
step 2. Compling -> Assembly level me convert kiya jata hai code ko, wo save hota hai ".s" extension.
step 3. Asembling -> In the assembling/step 3 here the code converted Assembly language to machine code(like=>0101110). Save into ".o" extension.
step 4. Linking -> linking sare ".o" file ko laker excutable file me convert karta hai jo ".exe" extension me save hota hai.

Linking are two types are follows:
1. Static Linking.
2. Dyanamic linking. (.dll) extension

*/

int main(int argc, char const *argv[])
{
    /* code */

    int a, b;
    printf("Enter number a \n");
    scanf("%d", &a);

    printf("Enter number b\n");
    scanf("%d", &b);

    printf("The sum of number is %d\n", a + b);

    return 0;
}
