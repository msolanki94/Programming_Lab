#include <stdio.h>
int gcd(int a , int b);
int  main()
{
    int a , b ;
    scanf("%d %d" ,&a ,&b);
    int g;
    if((a==1) ||( b==1))
    {
    printf("these numbers are co-prime\n");
     }
    else
    {
     g = gcd(a,b);
    
    if(g==1)
     {
    	printf("these numbers are co-prime\n");
     }
    else
     {
    	printf("these numbers  are not co-prime\n");
     }
    }
    
    //printf("%d",g);
    
	return 0;
}
int gcd(int a , int b)
{
   

   if(a==0)
   {
      return b;
   }
   if(b==0)
   {
      return a;
   }
   
    if(a==b)
    {
      return a;
    }
   if(a>b)
   {
      return gcd(a%b , b);
   }
   else
   {
      return gcd(a , b%a);
   }


}
