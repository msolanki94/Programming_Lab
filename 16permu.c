#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

void calculatePermutation(int *result, int total, int position);

int main()
{
    int result[SIZE];
    int position = 1000000;

    calculatePermutation(result, SIZE, position);

    printf("The 1,000,000th lexicographic permutation of digits 0 through 9 is:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}

void calculatePermutation(int result[], int total, int position)
{
    int factorial[SIZE];
    bool isUsed[SIZE] = { false };
    int i, j;

    factorial[0] = 1;
    for (i = 1; i < SIZE; i++) {
        factorial[i] = factorial[i - 1] * i;
    }
    position--;

    for (i = 0; i < SIZE; i++)
    {
        int idx = position / factorial[SIZE - i - 1];
        position %= factorial[SIZE - i - 1];

        for (j = 0; j < SIZE; j++)
        {
            if (!isUsed[j]) {
                if (idx == 0) 
                {
                    result[i] = j;
                    isUsed[j] = true;
                    break;
                }
                idx--;
            }
        }
    }
}

