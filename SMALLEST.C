#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,min;
clrscr();
printf("Enetr 5 elements:");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<=4;i++)
{
if (a[i]<min)
{
min=a[i];
}
}
printf("The smallest element is: %d \n",min);
getch();
}