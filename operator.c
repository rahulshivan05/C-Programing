#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int x = 10;
    // int y = 20;
    /* Arithmetic Operator */

    // int z = x + y;
    // printf("%d + %d = %d\n", x, y, z);

    // z = x - y;
    // printf("%d - %d = %d\n", x, y, z);

    // z = x * y;
    // printf("%d * %d = %d\n", x, y, z);

    // z = x / y;
    // printf("%d / %d = %d\n", x, y, z);

    // z = x % y;
    // printf("%d  %d = %d\n", x, y, z);

    // int z = 5;

    // If i comment out the below line then answer is same of below two statement

    // z = z * 5; // 5*5 =25
    // printf("%d\n", z);

    // z = z *= 5; // And here is z = 25; 25*5 = 125;
    // printf("%d\n", z);

    /* Another example of writing same with another way */

    // int z1 = 5;
    // printf("The value at z is %d\n", z1);

    // if i comment out the below line then answer to below two lines is same

    // z1 = z1 + 10;
    // printf("The Value of z1 is now: %d\n", z1);

    // z1 = z1 += 10; // this is a another way of writing the above line. The answer is same

    // printf("The value of z1 is now changed %d\n", z1);

    /* ===================== Bitwise Operator ====================== */

    // int z3 = 5;

    // z3 = z3 & 8;

    // and i write another way is
    // z3 &= 8; // answer is alway is same
    // printf("%d\n", z3);

    /* ==================== Comparison/Relational Operator ===================  */

    int x = 10;
    int y = 20;
    int z = 20;

    // if answer is True then return (1) else return (0).
    // printf(" X is smaller than y %d\n", x < y);
    // printf(" X is greater than y %d\n", x > y);
    // printf(" X is smaller than equall to y %d\n", x <= y);
    // printf(" X is equall to equall to y %d\n", x == y); // the answer is 0
    // printf(" X is not equall to y %d\n", x != y);       // in here answer is 1. Because ! <- not operator

    /* ====================== Logical OPerator =========================*/

    // printf("%d\n", ((x < y) && (y < z))); // comes true -> (1). when both values is true. If any one is false the answer is comes false.

    // printf("%d\n", ((x < y) || (y < z))); // In this operator at least one is then answer is true.

    printf("%d\n", !(x < y));

    return 0;
}
