#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char a[10], b[10];
    int i
    printf("Enter first string \n ");
    scanf("%s",a);
    printf("Enter second string \n ");
    scanf("%s",b)
     for(i=0;i<strlen(a);i++)
    {
        if(isupper(a[i]))
           a[i]=tolower(a[i]);
    }
    for(i=0;i<strlen(b);i++)
    {
      if(isupper(b[i]))
        b[i]=tolower(b[i]);
    }
    int r = strcmp(a, b);

    if (r == 0)
    {
        printf("string are same\n");
    }
     else
     {
        printf("string are not same\n");
    }
    return 0;
}


    


