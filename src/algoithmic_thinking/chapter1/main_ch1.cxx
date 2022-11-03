#include <iostream>
#include "externals/std_math/test.hpp" //Part of Automation Project-Script <starterpack++> ... ignore = true;
#define SIZE 100000

void identify_identical(int values[], int n);
int identical_right(int snow1[], int snow2[],
                    int start);
int identical_right(int snow1[], int snow2[], int start);

int identical_left(int snow1[], int snow2[], int start);
int are_identical(int snow1[], int snow2[]);
void identify_identical(int snowflakes[][6], int n);
int compare(const void *first, const void *second);

// ex1
void identify_identical(int values[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (values[i] == values[j])
            {
                printf("Twin integers found.\n");
                std::cout << i << " i and j " << j << std::endl;
                return;
            }
        }
    }
    printf("No two integers are alike.\n");
}

// ex2 - second function to wrap around array, still buggy
// int identical_right(int snow1[], int snow2[],
//                     int start)
// {
//     int offset, snow2_index;
//     for (offset = 0; offset < 6; offset++)
//     {
//         snow2_index = start + offset;
//         if (snow2_index >= 6)
//             snow2_index = snow2_index - 6;
//         if (snow1[offset] != snow2[snow2_index])
//             return 0;
//     }
//     return 1;
// }

// ex3 - start right and move around to the left
int identical_right(int snow1[], int snow2[], int start)
{
    int offset;
    for (offset = 0; offset < 6; offset++)
    {
        if (snow1[offset] != snow2[(start + offset) % 6])
            return 0;
    }
    return 1;
}

// wrap around to the left,s start left and move right
int identical_left(int snow1[], int snow2[], int start)
{

    int offset, snow2_index;
    for (offset = 0; offset < 6; offset++)
    {
        snow2_index = start - offset;
        if (snow2_index < 0)
            snow2_index = snow2_index + 6;
        if (snow1[offset] != snow2[snow2_index])
            return 0;
    }
    return 1;
}

int are_identical(int snow1[], int snow2[])
{
    int start;
    for (start = 0; start < 6; start++)
    {
        if (identical_right(snow1, snow2, start))
            return 1;
        if (identical_left(snow1, snow2, start))
            return 1;
    }
    return 0;
}

void identify_identical(int snowflakes[][6], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (are_identical(snowflakes[i], snowflakes[j]))
            {
                printf("Twin snowflakes found.\n");
                return;
            }
        }
    }
    printf("No two snowflakes are alike.\n");
}

// int compare(const void *first, const void *second)
// {
//     int i;
//     const int *snowflake1 = first;
//     const int *snowflake2 = second;
//     if (are_identical(snowflake1, snowflake2))
//         return 0;
//     for (i = 0; i < 6; i++)
//         if (snowflake1[i] < snowflake2[i])
//             return -1;
//     return 1;
// }

// int main(int argc, char const *argv[])
// {
//     // int foo = some_really_hard_math(10,5);

//     // std::cout << "Sampel project -> Plug & Play -> update 00ß" << std::endl;
//     // std::cout << foo << "\n";

//     int a[5] = {1, 2, 3, 1, 5};
//     identify_identical(a, 5);

//     return 0;
// }

int main(void)
{
    static int snowflakes[SIZE][6];
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < 6; j++)
            scanf("%d", &snowflakes[i][j]);
    identify_identical(snowflakes, n);
    return 0;
}
