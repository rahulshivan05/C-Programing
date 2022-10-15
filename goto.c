#include <stdio.h>

// int main(int argc, char const *argv[])
// {
// label:
//     printf("we are inside label\n");
//     goto end;
//     printf("Hello World\n");

//     goto label;
// end:
//     printf("We are at end\n");

//     return 0;
// }

int main(int argc, char const *argv[])
{
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                // break;
                goto end; // here the actually use of goto
            }
        }
    }
end:

    return 0;
}
