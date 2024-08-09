#include<stdio.h>
int harsd(int a);
int main()
{
 int n,y;
 scanf("%d",&n);
 y = harsd(n);
 if(y==1)
 {
  printf("Yes Given Number is Harshad\n");
 }
 else
 {
   printf("No Given Number is not Harshad\n");
 }
 return 0;
}
int harsd(int a)
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
      c = c + d;
      
      a = a/10;
  }
  
  if(tem%c == 0)
  {
   return 1;
  }
  else
  {
    return 0;
  }

}
