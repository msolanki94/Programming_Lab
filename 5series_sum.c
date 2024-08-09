#include<stdio.h>
#include<math.h>
int main()
{
 int x , n  ,i;
 float sum = 0.0;
 scanf("%d %d",&x , &n);
 for(i=1 ; i <=n ; i++)
 {
   sum = sum + (pow(x,i)/i)*(pow(-1,i+1));
 }
 
 printf("The sum given series is %f \n",sum);
 
 return 0;
}
