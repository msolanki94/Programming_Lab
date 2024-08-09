#include <stdio.h>
#include <math.h>
int per_d_ab(int a);
int main()
{
 int n , s1 , s2 , n1;
 scanf("%d %d",&n , &n1);
 s1 = per_d_ab(n);
 s2 = per_d_ab(n1);
 if(s1==n1 && s2 == n)
 {
  printf("Given numbers are Amicable\n");
 }
 else
 {
   printf("Given numbers are not Amicable\n");
 }
 /*if(pda==0)
 {
  printf("Given number is perfect number\n");
 }
 else if( pda==1)
 {
   printf("Given number is deficint number\n");
 }
 else
 {
   printf("Given number is abundant number\n");
 } */
 
 
 return 0;
}

int per_d_ab(int a)
{
   int n = a, i , sum=0 , temp=0;
   for(i=1;i<= sqrt(n); i++)
   {
   	if(n%i==0)
   	{
   	  sum = sum + i;
   	}
   	
   	if(i !=1 && n%i ==0 && i != n/i)
   	{
   	   temp = n/i;
   	   sum = sum + temp;
   	}
   }
   
   return sum;
   /*if(sum == n)
    {
      return 0;
    }
    
    if(sum < n)
    {
      return 1;
    }
    
    if(sum > n)
    {
      return 2;
    }*/
}

