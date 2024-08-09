#include<stdio.h>
int main()
{
 int n=0 , i , temp,j ;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<2;i++)
 {
  for(j=0;j<n-1;j++)
  {
     if(a[j]>a[j+1])
     {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
     
     }
  }
  
  
 }
 printf("%d %d\n",a[n-1],a[n-2]);
 return 0;
}
