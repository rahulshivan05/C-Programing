#include <stdio.h>
#include <string.h>

struct Driver
{
    char name[30];
    char lice_no[40];
    char route[50];
    int Kms;
} d;

void takeDriDeta()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter the Driver Detail of %d).\n", i);
        printf("Enter the Driver Name:\n");
        scanf("%s", &d.name);

        printf("Enter the Driver License No.\n");
        scanf("%s", &d.lice_no);

        printf("Enter the Driver Route.\n");
        scanf("%s", &d.route);

        printf("Enter the Driver Kms travelled.\n");
        scanf("%d", &d.Kms);
    }
}

void printDriDeta()
{
    for (int i = 1; i <= 3; i++)
    {

        printf("\nDriver Detail:\n");
        printf("Driver Name is: %s\n", d.name);
        printf("Driver License No. is: %s\n", d.lice_no);
        printf("Driver Route is: %s\n", d.route);
        printf("Driver travelled Kms is: %d\n", d.Kms);
    }
}

int main(int argc, char const *argv[])
{
    // Taking input from user and save in Driver Structure.
    // d d1, d2, d3;

    takeDriDeta();
    printf("Printing the Detail's of Drivier's.\n");
    printDriDeta();

    // If take Driver Entery Individual

    // printf("Enter the Driver name.\n");
    // scanf("%s", &d.name);

    // printf("Enter the Driver License No.\n");
    // scanf("%s", &d.lice_no);

    // printf("Enter the Driver Route.\n");
    // scanf("%s", &d.route);

    // printf("Enter the Driver Kms travelled.\n");
    // scanf("%d", &d.Kms);

    // Output

    // printf("\nDriver Detail:\n");
    // printf("Driver Name is: %s\n", d.name);
    // printf("Driver License No. is: %s\n", d.lice_no);
    // printf("Driver Route is: %s\n", d.route);
    // printf("Driver travelled Kms is: %d\n", d.Kms);

    return 0;
}
