#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age \n");

    scanf("%d", &age);
    printf("You have enter %d as your age.\n", age);

    if (age >= 18)
    {
        printf("You can vote");
    }
    else
    {
        printf("You cann't vote");
    }

    return 0;
}
