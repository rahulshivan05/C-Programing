#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Example of Arthemetic operation */
    int a, b;
    a = 34;
    b = 6;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);

    /* Relational Operation */
    b = 34;
    printf("Relational Operater = %d\n", a == b); // Agar a==b hai to "1" return karega nahi to "0" return karega

    // Logical Operater like -> (&&, ||, !)
    a = 0;
    printf("Agar a and b int hai to = %d\n", a && b); // 0 => false and 1 => true

    /*
        "||" means "OR",
        isme dono me sa koi bhi ek value true honi chaiya.
    */
    printf("|| OR ka example = %d\n", a || b);

    // agar me (! -> not operator) ka use karu to

    b = 0; // agar me (b) ko 0 kar deta hu to 1 return karega. Ye usko ulta kar deta hai
    printf("a ! b = %d\n"), !b;

    /*
    Bitwise Operator are three types (& -> and, |, ^)
    (& -> and) ko dono value true chaiya tabhi true hoga. True means (1), and false means (0)
    */

    a = 2;
    b = 3;
    printf("a & b = %d\n"), a &b;

    return 0;
}
