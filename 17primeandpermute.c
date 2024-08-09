#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000
#define MIN 1000

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num < 2) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to check if two numbers are permutations of each other
bool arePermutations(int a, int b)
{
    char strA[5], strB[5];
    sprintf(strA, "%d", a);
    sprintf(strB, "%d", b);

    int count[10] = {0};

    for (int i = 0; strA[i] != '\0'; i++)
    {
        count[strA[i] - '0']++;
    }

    for (int i = 0; strB[i] != '\0'; i++)
    {
        count[strB[i] - '0']--;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

// Main function to find and print the required 12-digit number
int main()
{
    for (int a = MIN; a < MAX; a++)
    {
        if (isPrime(a))
        {
            for (int b = a + 1; b < MAX; b++)
            {
                if (isPrime(b) && arePermutations(a, b))
                {
                    int c = b + (b - a);
                    if (c < MAX && isPrime(c) && arePermutations(a, c))
                    {
                        printf("The required 12-digit number is: %d%d%d\n", a, b, c);
                    }
                }
            }
        }
    }

    return 0;
}

