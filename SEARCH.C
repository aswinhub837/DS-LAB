#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,key,flag=0;
clrscr();
printf("Enter 5 elemnts:");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number to be searched");
scanf("%d",&key);
for(i=0;i<=4;i++)
{
if(a[i]==key)
{
printf("%d is found in %d postion",key,i+1);
flag=1;
}
}
if (flag==0)
{
printf("%d is not found",key);
}
getch();
}