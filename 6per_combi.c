#include<stdio.h>
int ncr(int n , int r);
int npr(int n , int r);
int fact(int n);
int ncrnum(int n , int r);
int main()
{
 int n , r , nc , np ;
 scanf("%d%d",&n,&r);
 nc = ncr(n,r);
 np = npr(n,r);
 printf("ncr is %d  npr is %d\n",nc , np);
 
 return 0;
}

int ncr(int n , int r)
{
   int nc,t;
   t = n-r+1;
   nc = ncrnum(n,t)/fact(r);
   return nc;
 }
 
 int ncrnum(int n , int r)
 {
    if(n == r)
    {
      return r;
    }
    else
    {
       return n*ncrnum(n-1,r);
    }
 }
 
 int fact(int n)
 {
   if(n==1)
   {
     return 1;
   }
   else
   {
     return n*fact(n-1);
   }
 
 }
 
 int npr(int n , int r)
 {
    return ncr(n,r)*fact(r);
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
