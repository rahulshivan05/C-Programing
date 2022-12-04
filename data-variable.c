#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /* INT */

    // int a = 10244565;
    // int b = 20;
    // int c = a + b;

    // printf("%d + %d = %d\n", a, b, c);
    // printf("%d\n", a);
    // printf("%ld\n", sizeof(a));

    // int d = 2147483647;
    // printf("%d\n", d); // comes error because d is overflow the limit of int

    // printf("INT MAX VALUE: %d\n", INT_MAX);
    // printf("INT MIN VALUE: %d\n", INT_MIN);

    /* Short Int */

    // short e = 32767;
    // printf("%d\n", e);
    // printf("%ld\n", sizeof(e));

    // printf("SHORT MAX VALUE: %d\n", SHRT_MAX);
    // printf("SHORT MIN VALUE: %d\n", SHRT_MIN);

    /* Long Int */

    // Int or Long Int aur both same because INT or Long Int takes 10 integers

    // long f = 2132465052;
    // printf("%ld\n", f);
    // printf("Size of Long: %ld bytes \n", sizeof(f));
    // printf("LONG MAX VALUE: %ld\n", LONG_MAX);
    // printf("LONG MIN VALUE: %ld\n", LONG_MIN);

    /* Long Long Int */

    // long long g = 9223372036850775807;
    // printf("%lld\n", g);
    // printf("Size of Long Long Int: %ld bytes \n", sizeof(g));
    // printf("LONG LONG MAX VALUE: %lld\n", LLONG_MAX);
    // printf("LONG LONG MIN VALUE: %lld\n", LLONG_MIN);

    /* Signed Int */

    // unsigned long int h = 2156516;
    // printf("%llu\n", h);
    // printf("Size of Unsigned Long Long Int: %llu bytes \n", sizeof(h));
    // printf("UNSIGNED LONG LONG MAX: %llu\n", ULLONG_MAX);

    /* ======================= Floating Int ======================= */

    // float f1 = 123456.789123456789;
    // printf("%.20f\n", f1);
    // printf("Size of f1: %ld bytes\n", sizeof(f1));

    /* Double */

    // double d1 = 123456.789123456789;
    // printf("%.20f\n", d1);
    // printf("Size of f1: %ld bytes\n", sizeof(d1));

    // printf("MAX FLOAT: %f\n", __FLT_MAX__);
    // printf("DOUBLE FLOAT: %f\n", __DBL_MAX__);

    /* ============================= Char =============================== */

    // char c1 = 'A';
    // char c2 = 90;
    // unsigned char c3 = 'b';

    // printf("%d\n", c1); // this is basically printing the ASCII value of the Char
    // printf("%d\n", c2);

    // printf("%c\n", c1);
    // printf("%c\n", c2); // This is bascially printing the Value at 90 is (Z)

    // printf("%ld bytes\n", sizeof(c1));
    // printf("%ld bytes\n", sizeof(c3));
    // printf("MAX OF CHAR: %d Char\n", CHAR_MAX);
    // printf("MAX OF UNSIGNED CHAR: %d Char\n", UCHAR_MAX);

    /* =================== Boolean ==================================*/

    // bool b = false; // if (true) then return 1 and (false) return 0.
    // printf("%d\n", b);
    // printf("%d bytes\n", sizeof(b));

    /* This is another thing just for fun */

    // long double ld = 10.21;
    // printf("Size of ld: %ld\n", sizeof(ld));

    return 0;
}
