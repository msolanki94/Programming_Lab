#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double len(double,double ,double ,double);
double area(double,double ,double ,double ,double , double);
int main()
{
 double x1,y1,x2,y2,x3,y3,ar;
 double sa,sb,sc;

 scanf("%lf %lf",&x1,&y1);
 scanf("%lf %lf",&x2,&y2);
 scanf("%lf %lf",&x3,&y3);
 printf("x1 %lf y1 %lf\n",x1,y1);
 printf("x2 %lf y2 %lf\n",x2,y2);
 printf(" x3 %lf y3 %lf\n",x3,y3);
 sa = len(x1,y1,x2,y2);
 sb = len(x2,y2,x3,y3);
 sc = len(x3,y3,x1,y1);
 ar = area(x1,y1,x2,y2,x3,y3);
 printf(" sa  %lf sb %lf sc %lf ar %lf\n",sa,sb,sc,ar);
 if((sa == sb) && (sb == sc) && (sc==sa))
 {
  printf("Triangle is Equilateral trianle\n");
 }
 else if( (sa == sb) || (sb == sc) || (sc == sa) )
 {
   printf("Triangle is Isosceles trianle\n");
 }
 else if((sa != sb) && (sa != sc) && (sb != sc))
 {
 printf("Triangle is Scalene trianle\n");
 }
 if( ar == 0 )
 {
 printf("Points are Collinear\n");
 }
 else
 {
 printf("Points are not Collinear\n");
 }
 
 return 0;
}
double len(double x1,double  y1 ,double x2 ,double y2)
{
   double d1 , d2 ,l,t;
   d1 = abs(x1-x2);
   d2 = abs(y1-y2);
   printf("for %lf %lf %lf %lf , %lf %lf\n",x1,y1,x2,y2,d1,d2);
    t = (d1*d1) + (d2*d2);
   l = sqrt(t);
   
   return l;

}

double area(double x1,double y1 ,double x2 ,double y2 ,double x3 , double y3)
{
  double a;
  a = x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2);
  return a;
}


















