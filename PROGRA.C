#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr1[30],i,n,a,b,temp,arr2[30],ch;
	clrscr();
	printf("\n1.create");
	printf("\n2.Union");
	printf("\n3.Find");
	printf("\n4.Exit");
	while(1)
	{
		printf("\n enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://Create set
			printf("enter no of elements in set");
			scanf("%d",&n);
			printf("enter elements in set");
			for(i=0;i<n;i++)
			{
				scanf("%d",&arr1[i]);
				arr2[i]=i;
			}
			break;

			case 2:
			printf("\n enter the index of element which are to be connected\n:");
			scanf("%d %d",&a,&b);
			temp=arr2[a];
			for(i=0;i<n;i++)
			{
				if(arr2[i]==temp)
				{
					arr2[i]==arr2[b];
				}
			}
			printf("\n element status after union\n");
			for(i=0;i<n;i++)
			{
				printf("%d\t\t%d\n",arr1[i],arr2[i]);
			}
			printf("\nelements have been successfully connected");
			break;

			case 3:
			printf("\n enter the index of elements(2 indices)\n");
			scanf("%d %d",&a,&b);
			if(arr2[a]==arr2[b])
			{
				printf("\n elements at %d and %d are connected",a,b);
			}
			else{
			printf("\n elements at indices %d & %d are not connected\n",a,b);
			break;

			case 4:
			exit(0);
			break;

			default:
			printf("\n wrong choice,please select a valid choid=cr");
			break;
			}}
			}
