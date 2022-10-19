#include <stdio.h>
#define miles 0.621371
#define foot 0.0833333
#define inches 0.393701
#define kgs 0.453592
#define meter 0.0254

int main(int argc, char const *argv[])
{
    char input;
    int first;
    float second;

    while (1)
    {
        printf("\nEnter the input character. q to quit\n1:-Kilometers(kms) to miles.\n2:- Inches to foot.\n3:- cms to Inches.\n4:- pound to kg.\n5:- Inches to meters.\n");
        scanf(" %c", &input);
        printf("You have enteres %c\n\n", input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program....");
            goto end;
            break;

        case '1':
            printf("Enter kms to convert miles\n");
            scanf("%d", &first);
            second = first * miles;
            printf("%d kms is equal %.4f miles\n \n", first, second);
            break;

        case '2':
            printf("Enter Inches to convert Foot\n");
            scanf("%d", &first);
            second = first * foot;
            printf("%d Inches is equal %.4f Foot\n \n", first, second);
            break;

        case '3':
            printf("Enter Cms to convert Inches\n");
            scanf("%d", &first);
            second = first * inches;
            printf("%d Cms is equal %.4f Inches\n \n", first, second);
            break;

        case '4':
            printf("Enter Pound to convert Kgs\n");
            scanf("%d", &first);
            second = first * kgs;
            printf("%d Pound is equal %.4f Kgs\n \n", first, second);
            break;

        case '5':
            printf("Enter Inches to convert meters\n");
            scanf("%d", &first);
            second = first * meter;
            printf("%d Inches is equal %.4f Meters\n \n", first, second);
            break;

        default:
            break;
        }
    }
end:

    return 0;
}
