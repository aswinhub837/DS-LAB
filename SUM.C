#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,sum=0;
clrscr();
printf("Enter the 5 elements:");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
sum=sum+a[i];
}
printf("sum=%d",sum);
getch();
}