#include<stdio.h>
int main()
{
int x,y,a,b,i;
printf("enter the values of x:,y:");
scanf("%d %d",&x,&y);
printf("enter the values of a:,b:");
scanf("%d %d",&a,&b);
for(i=x;i<=y;i++)
{
   if(i%a==0&&i%b==0)
   printf("\n%d",i);
}
}


