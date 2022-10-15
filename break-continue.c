#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age ", i);
        scanf("%d", &age);

        // Example of Break statement

        // if (age > 10)
        // {
        //     break;
        // }

        if (age > 10)
        {
            continue;
        }
        printf("We have not come across any condition statement.\n");
        printf("We have not come across any condition statement.\n");
        printf("Rahul is a good boy\n");
    }

    return 0;
}
