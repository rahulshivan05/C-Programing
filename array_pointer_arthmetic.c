#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptra = &a;

    // printf("%d\n", ptra);

    ptra--; // here (--) means go back (4bytes) into memory.

    // printf("%d\n", ptra);

    // In Pointer you add (+1) then size of int added. In my Case size of int is taken (4 byte) in my Laptop.

    // printf("%d\n", ptra + 2); // (+ 2) means adding (4bytes * 2 = 8bytes)

    char b = '3';
    char *ptrb = &b;

    // printf("The Address of the Char in Pointer\n");

    // printf("%d\n", ptrb);
    ptrb++;
    // printf("%d\n", ptrb);

    // In my case char take's only (1 byte) in memory.

    // printf("%d\n", ptrb - 2);

    int arr[] = {131, 2, 3, 4, 9};
    int *arrptr = arr;

    printf("Value at position 3rd of the array is %d \n", arr[3]);

    // The value of below two code is same.
    printf("The address of first element of the array is %d \n", &arr[0]);
    printf("The address of first element of the array is %d \n", arr);

    // The value of below two code is same.
    printf("The address of second element of the array is %d \n", &arr[1]);
    printf("The address of second element of the array is %d \n", arr + 1);

    // Printing the third element of the aray

    printf("The address of third element of the array is %d \n", &arr[2]);
    printf("The address of third element of the array is %d \n", arr + 2);

    // arr++; // not excuated because the array is permenant

    // arrptr++; // this code dosn't throw error because it is valid.

    printf("\nTrying Pointer \n\n");

    // The value of below two code is same.
    printf("The value at address of first element of the array is %d \n", *(&arr[0]));
    printf("The value at address of first element of the array is %d \n", *(arr));

    // The value of below two code is same.
    printf("The value at address of second element of the array is %d \n", *(&arr[1]));
    printf("The value at address of second element of the array is %d \n", *(arr + 1));

    return 0;
}
