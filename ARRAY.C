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
printf("Array element are:");
for(i=0;i<=4;i++)
{
printf("\n %d",a[i]);
}
getch();
}
