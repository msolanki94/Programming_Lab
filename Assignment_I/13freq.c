#include<stdio.h>
int main()
{
   int s;
   printf("Enter the size of array\n");
   scanf("%d",&s);
   int a[s];
   printf("Enter the array element between 1 to 100\n");
   for(i=0;i<s;i++)
   {
     scanf("%d",&a[i]);
   }
 int h[100]={0} , mf = 0 ,e = -1 ,i;
   for (i=0;i<n; i++)
    {
        h[a[i]]++;
        if (h[a[i]] > mf)
        {
            mf = h[a[i]];
            e = a[i];
        }
    }
    printf("Element:%d Frequency:%d\n",e,mf);
   return 0;
}
