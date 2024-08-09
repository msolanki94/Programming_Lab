#include <stdio.h>
#include <string.h>

int mp(char* str, char* str2);
int m(int a, int b, int c);

int main() 
{
    char str[100];
    printf(" Enter first String \n");
    scanf("%s",str);
    char str2[100];
    printf(" Enter second String \n");
    scanf("%s",str2);

    int ans = mp(str, str2);
    printf("Total Operation are: %d\n", ans);

    return 0;
}

int mp(char* str, char* str2)
{
    int l1= strlen(str);
    int l2 = strlen(str2);
    int a[l1 + 1][l2 + 1];

    for (int i = 0; i <= l1; ++i) 
    {
        for (int j = 0; j <= l2; ++j)
        {
            if (i == 0)
                a[i][j] = j; 
            else if (j == 0)
                a[i][j] = i; 
            else if (str[i - 1] == str2[j - 1])
                a[i][j] = a[i - 1][j - 1]; 
            else
                a[i][j] = 1 + m(a[i - 1][j], a[i][j - 1], a[i - 1][j - 1]); 
        }
    }
    return a[l1][l2];
}

int m(int a, int b, int c) {
    if (a < b && a < c) return a;
    if (b < c) return b;
    return c;
}
