/*

Convert into following:

1:- Kilometers(kms) to miles
2:- inches to foot
3:- cms to inches
4:- pound to kgs
5:- inches to meters

*/

#include <stdio.h>
#define miles 0.621371
#define foot 0.0833333
#define inches 0.393701
#define kgs 0.453592
#define meter 0.0254

// 1:- Kilometers(kms) to miles

int kilo_miles()
{
    int k;
    printf("Enter the kilometer:\n");
    scanf("%d", &k);
    printf("you answer in miles is: %f\n", k * miles);
}

// 2:- inches to foot

int inch_foot()
{
    int i;
    printf("Enter you inches: ");
    scanf("%d", &i);
    printf("You inches converted to foot %f\n", i * foot);
}

// 3:- cms to inches

int cms_inches()
{
    int i;
    printf("Enter you centemeter: ");
    scanf("%d", &i);
    printf("You centemeter converted into inches %f\n", i * inches);
}

// 4:- pound to kgs

int pound_kgs()
{
    int i;
    printf("Enter you pound: ");
    scanf("%d", &i);
    printf("You pound converted into kgs %f\n", i * kgs);
}

// 5:- inches to meters

int inches_meter()
{
    int i;
    printf("Enter you inches: ");
    scanf("%d", &i);
    printf("You inches converted into meters %f\n", i * meter);
}

int main(int argc, char const *argv[])
{
    /* code */
    int input;

    // kilo_miles();
    // inch_foot();
    // cms_inches();
    // pound_kgs();
    // inches_meter();

    printf("Enter number to print any thing you want: ");
    scanf("%d", &input);

    // while (input == 1)
    // {
    //     kilo_miles();
    // }

    // switch (input)
    // {
    // case 1:
    //     kilo_miles();

    // case 2:
    //     inch_foot();

    // case 3:
    //     cms_inches();

    // case 4:
    //     pound_kgs();

    // case 5:
    //     inches_meter();

    // case 0:
    //     printf("Thank you for using my calculator.");
    //     break;
    // default:
    //     printf("Enter any number to calculate.");
    // }

    while (input == 1)
    {
        kilo_miles();
    }

    /* Solution not satisfied me*/

    // int marks;
    // printf("Enter the marks: ");
    // scanf("%d", &marks);

    // if (marks > 50 & marks < 40)
    // {
    //     printf("BCA");
    // }
    // else
    // {
    //     printf("BA");
    // }

    return 0;
}
