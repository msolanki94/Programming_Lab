#include <stdio.h>
#include <math.h>

#define MIN_DIVISORS 500

int calculateDivisors(int number);
int findTriangularNumber(int minDivisors);

int main()
{
    int minDivisors = MIN_DIVISORS;
    int result = findTriangularNumber(minDivisors);

    printf("The first triangular number with more than %d divisors is: %d\n", minDivisors, result);

    return 0;
}

int calculateDivisors(int number)
{
    int divisorCount = 0;
    int sqrtNum = (int)sqrt(number);

    for (int i = 1; i <= sqrtNum; i++)
    {
        if (number % i == 0)
        {
            if (i == number / i)
                divisorCount++;
            else
                divisorCount += 2;
        }
    }

    return divisorCount;
}

int findTriangularNumber(int minDivisors)
{
    int n = 1;
    long int triangularNumber;
    int divisorTotal;

    while (1)
    {
        triangularNumber = n * (n + 1) / 2;
        divisorTotal = calculateDivisors(triangularNumber);

        if (divisorTotal > minDivisors)
        {
            return triangularNumber;
        }

        n++;
    }
}

