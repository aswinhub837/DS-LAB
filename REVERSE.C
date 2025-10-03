#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("Enter the 5 elements:");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
printf("\n reverse order of array:");
for(i=4;i>=0;i--)
{
printf("%d \n",a[i]);
}
getch();
}