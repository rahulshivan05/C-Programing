#include <stdio.h>

int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, arr[i]);
    }
    // arr[0] = 382; // very important if you are change any value here, it get reflected in main()
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value at %d is %d\n", i, ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}

//  for multi-dimensional array
void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d and %d is %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int arr[][2] = {{2, 13}, {9, 3}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);

    // In the 2nd call the value of 3rd element is changed
    // func2(arr);

    func3(arr);
    return 0;
}
