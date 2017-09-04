#include<stdio.h>
int main()
{
int a,i,sum=0,add=0;
printf("enter value\t");
scanf("%d",&a);
for(i=1;i<=15;i++)
{
add+=i;
}
printf("THE SUM OF NUMBERS BETWEEN 1 TO 15 IS %d\n\t",add);
while(a<=45)
{
if(a%3==0)
{
sum+=a;
}
a++;
}
printf("The sum of odd numbers between 15 and 45: %d",sum);
return 0;
}
