#include <stdio.h>

void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 6 / 2; i++)
    {
        temp = arr[i];       // first assign arr[i] in temp. Because assigment is Right to Left.
        arr[i] = arr[6 - i]; // Then,
        arr[6 - i] = temp;
    }
}

int printArray(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    // Reversing the Array here
    arrayRev(arr);

    printf("\nAfter Reversing the Array.\n");
    printArray(arr);

    return 0;
}
