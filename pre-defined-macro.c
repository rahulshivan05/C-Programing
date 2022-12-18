#include <stdio.h>

// #define eprintf(format, ...) fprintf(stderr, format, __VA_ARGS__)

#define eprintf(format, ...) \
    fprintf(stderr, format __VA_OPT__(, ) __VA_ARGS__)

#define strange(file) fprintf(file, "%s %d", ... strange(stderr) p, 35)

// #define SKIP_SPACES(p, limit) \
//     {                         \
//         char *lim = (limit);  \
//         while (p < lim)       \
//         {                     \
//             if (*p++ != ' ')  \
//             {                 \
//                 p--;          \
//                 break;        \
//             }                 \
//         }                     \
//     }

// #define SKIP_SPACES(p, limit) \
//     do                        \
//     {                         \
//         char *lim = (limit);  \
//         while (p < lim)       \
//         {                     \
//             if (*p++ != ' ')  \
//             {                 \
//                 p--;          \
//                 break;        \
//             }                 \
//         }                     \
//     } while (0)

int main(int argc, char const *argv[])
{
    printf("Line number is: %d\n", __LINE__);

    printf("File Name of the Program is: %s\n", __FILE__);

    printf("Program Compilation Date: %s\n", __DATE__);

    printf("Time of Compilation is: %s\n", __TIME__);

    printf("Compiler Standard Number: %d\n", __STDC__);

    printf("STDC_HOSTED Number: %d\n", __STDC_HOSTED__);

    printf("Compiler Standard Version Number: %ld\n", __STDC_VERSION__);

    printf("%d\n", __COUNTER__);
    printf("%d\n", __GNUC__);
    printf("%d\n", __GNUC_MINOR__);
    printf("%d\n", __GNUC_PATCHLEVEL__);

    // #define GCC_VERSION (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)
    // /* Test for GCC > 3.2.0 */
    // #if GCC_VERSION > 30200
    // #endif

    printf("%s\n", __BASE_FILE__);
    printf("%d\n", __INCLUDE_LEVEL__);
    printf("%s\n", __VERSION__);
    printf("functions will be inlined into their callers: %d\n", __NO_INLINE__);
    printf("%d\n", __GNUC_STDC_INLINE__);
    // printf("%s\n", __USER_LABEL_PREFIX__);
    printf("%ld\n", __CHAR_BIT__);
    printf("%ld\n", __SCHAR_MAX__);

    eprintf("Success\n");
    fprintf(stderr, "success!\n");

    /* When i am playing with Macros */

    // int *p;
    // // int *lim;
    // fprintf(stderr, "%s %d", p, 35);

    // if (*p != 0)
    // {

    //     SKIP_SPACES(p, lim);
    // }
    // else
    // {

    //     printf("Not run\n");
    // }

    return 0;
}
