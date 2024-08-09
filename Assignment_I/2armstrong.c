#include<stdio.h>
int arm(int a);
int main()
{
 int n,y;
 scanf("%d",&n);
 y = arm(n);
 if(y==1)
 {
  printf("Yes Given Number is Armstrong\n");
 }
 else
 {
   printf("No Given Number is not Armstrong\n");
 }
 return 0;
}
int arm(int a)
{ 
  int d , c = 0 , tem;
  tem = a;
  if(a==0)
  {
   return 1;
  }
  while(a != 0)
  {
      d=a%10;
      c = c + d*d*d;
      
      a = a/10;
  }
  
  if(tem == c)
  {
   return 1;
  }
  else
  {
    return 0;
  }

}
