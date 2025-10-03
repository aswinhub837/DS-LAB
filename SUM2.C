#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int add(int,int);

void main()
{
int a,b,sum;
clrscr();
printf("enter the two numbers:");
scanf("%d %d",&a,&b);
sum=add(a,b);
printf("%d",sum);
getch();
}
int add(int x,int y)
{
return (x+y);

}