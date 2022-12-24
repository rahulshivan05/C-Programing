#include <stdio.h>

void print_array(int array[], int size);
// void print_array(int array[]);

int main(int argc, char const *argv[])
{
    // int myarr[] = {10, 20, 30, 40};
    // int myarr[4]; // when declare like this then garbage value return

    // Only initialize
    // int myarr[5] = {}; // when do like this then get 0
    // int other_arr[10] = {};

    // Buffer overflow/ memory overflow

    // for (int i = 0; i < 15; i++)
    // {
    //     // printf("%d\n", myarr[i]);

    //     /*

    //     when i run this below code then do right but it goes to neighbour memory
    //     and overwrite the neighbour memory also

    //     */
    //     myarr[i] = i * 10;

    //     // printf("%d\n", myarr);
    // }

    /* and also printing the neighbouring memory value */

    // for (int i = 0; i < 5; i++)
    // {
    //     // printing the value of 5 elements is (0,10,20,30,40)
    //     printf("%d\n", myarr[i]);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", other_arr[i]);
    // }

    /*

    2nd Example goes down

    */

    // each element of array is same data type and same memory occupied by memeory.
    // in my case int takes 4 bytes

    // int my_arr[] = {1, 2, 3, 4, 5, 7, 9, 8};
    // // in here i declare the c as a (size) in function
    // // Calculate length of the array
    // int c = sizeof(my_arr) / sizeof(my_arr[0]);
    // // printf("%d\n", c);

    // print_array(my_arr, c);

    // printf("Elements in my_arr is: %ld\n", sizeof(my_arr) / sizeof(my_arr[0]));

    /*

    3rd example

    */

    // int multi_array[2][3] = {
    //     {2, 3, 4},
    //     {1, 5, 7}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d\n", multi_array[i][j]);
    //     }
    // }

    /*

    4th Example

    */
    // String's are Array's of Character

    // char name[20] = "RahulGupta";
    // If a not specify the length of the string it's automatically get

    char name[10] = "RahulKumar"; // just continue reading and reading without (\0)
    char another_name[10] = "HELLOOOO";

    // If i doesn't put null terminator at last then read the value at next memory
    printf("%s\n", name);

    /*
    error comes on ubuntu when use this (gets) function

    gets(name); // (gets) used for taking input from the user
    puts(name); // (puts) used for print the value on console.

    */

    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // name example with '\0'
    // char nam[7] = {'a', 'b', 'c', 'd', 'e', '\0', 'f'};

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%c\n", nam[i]);
    // }

    // printf("%ld\n", sizeof(name));
    // printf("%c\n", name[9]);
    // printf("%ld\n", sizeof(num) / sizeof(0)); // 4*10 = 40 bytes

    // printf("%c\n", name[2]);

    return 0;
}

/* Defining the function */

void print_array(int array[], int size)
{
    // int size = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}

// When i run this thing then an error come on console
// In windows nothing happen

// Error on Ubuntu

/*

*** stack smashing detected ***: terminated
Aborted (core dumped)

*/

// int myarr[4] = {};

// for (int i = 0; i < 10; i++)
// {
//     myarr[i] = i * 10;
// }
