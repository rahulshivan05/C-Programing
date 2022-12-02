#include <stdio.h>

/* Mean Formula */

// Mean = Sum of the Frequency or Term / no of the term

int mean()
{
    float mean;
    int sum = 0;
    int n;
    printf("Enter the Length of the Array you want to create\n");
    scanf(" %d", &n);

    int values[n];

    printf("Enter the value you want to save in Array\n");

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &values[i]);
        sum += values[i];
    }

    // printf("Mean = %.3f", sum / (float)n);
    mean = printf("Mean = %.3f", sum / (float)n);
    return mean;
}

int main(int argc, char const *argv[])
{
    mean();

    return 0;
}
