#include <stdio.h>

int main(int argc, char const *argv[])
{
    /**************** WHILE LOOP *********************/
    int counter = 0;

    // if i put (.5) in limit then print 1 to 8? why?
    int limit;
    // printf("Enter the limit\n");
    // scanf("%d", &limit);

    // while (counter < limit)
    // {
    //     // printf("%d\n", counter);

    //     // write another way
    //     // printf("%d\n", counter++); // starts with 0 to 9
    //     printf("%d\n", ++counter); // starts with 1 to 10

    //     // write in Many types

    //     // counter = counter + 1;
    //     // counter += 1;
    //     // counter++; // print 0 to 9
    // }

    /**************** DO WHILE LOOP *********************/

    // Only difference in Do-While loop is one time is definite this is running

    // do
    // {
    //     printf("%d\n", ++counter);
    // } while (counter < limit);

    /**************** FOR LOOP *********************/

    // in this for loop when i put (++i) then print 0 to 99
    // another case when i put (i++) then also print 0 to 99

    for (int i = 0; i < 100; i++) // (i++) print 0 to 99
    {
        printf("%d\n", i);
    }

    return 0;
}
