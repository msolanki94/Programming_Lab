#include <stdio.h>
#include <stdbool.h>

#define LIMIT 28123

// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int num)
{
    int sum = 1; // 1 is always a proper divisor
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i != num / i)
            {
                sum += num / i;
            }
        }
    }
    return sum;
}

int main()
{
    // Array to mark abundant numbers
    bool isAbundant[LIMIT + 1] = {false};
    int abundantNumbers[LIMIT];
    int abundantCount = 0;

    // Identify all abundant numbers up to the limit
    for (int i = 1; i <= LIMIT; i++)
    {
        if (sumOfDivisors(i) > i)
        {
            isAbundant[i] = true;
            abundantNumbers[abundantCount++] = i;
        }
    }

    // Array to mark sums of two abundant numbers
    bool canBeWrittenAsSum[LIMIT + 1] = {false};

    // Mark all numbers that can be written as the sum of two abundant numbers
    for (int i = 0; i < abundantCount; i++)
    {
        for (int j = i; j < abundantCount; j++)
        {
            int sum = abundantNumbers[i] + abundantNumbers[j];
            if (sum <= LIMIT)
            {
                canBeWrittenAsSum[sum] = true;
            }
            else
            {
                break;
            }
        }
    }

    // Calculate the sum of all numbers that cannot be written as the sum of two abundant numbers
    int totalSum = 0;
    for (int i = 1; i <= LIMIT; i++)
    {
        if (!canBeWrittenAsSum[i])
        {
            totalSum += i;
        }
    }

    printf("The sum of all positive integers which cannot be written as the sum of two abundant numbers is: %d\n", totalSum);

    return 0;
}

