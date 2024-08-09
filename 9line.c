#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
 double m1,c1,m2,c2 , red , deg,a;
 int x=1;
 printf("Enter M1 and C1 of First line\n");
 scanf("%lf %lf",&m1,&c1);
  printf("Enter M2 and C2 of second line\n");
 scanf("%lf %lf",&m2,&c2);
 if(m1==m2)
 {
    x = 0;
 }
 else if(m1*m2==-1)
 {
    x = 90;
 }
 else
 {                     
              a = (m2-m1)/(1+m1*m2));
              //printf("%lf",a);
 	      red = atan(a);
 	      //printf("%lf",red);
 	      deg = (red*180)/3.14;
 	      //printf("%lf",deg);
 
 }
 switch(x)
 {
    case 0 : printf("Lines are Parallel\n");
    		break;
    case  90 : printf("Lines are Perpendicular\n");
    		    break;
    default : printf("Lines are Intersecting with an angle %.1lf \n",deg);
 }
 
 return 0;
}
