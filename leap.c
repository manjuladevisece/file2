#include<stdio.h>
int main()
{
int year;
scanf("%d%d%d",&a,&b,&c);
if(year%400==0 && year%4==0 && year%100!=0)
{
printf("Leap year");
}
else 
{
printf("Not a leap year");
}
return 0;
}
