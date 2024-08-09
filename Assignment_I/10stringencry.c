#include<stdio.h>
int main()
{
 char s[100] ; 
 int  i=0;
 scanf("%s",s);
 while(s[i] != '\0')
 {
   if(s[i]=='a')
   {
      s[i]= 'b';
   }
 i++;
 }
printf("%s\n",s);
 return 0;
}
