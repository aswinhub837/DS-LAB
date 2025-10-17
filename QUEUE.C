#include<stdio.h>
#include<conio.h>
#define SIZE 4
int queue[SIZE];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
	int i,choice;
	clrscr();
	while(1)
	{
		printf("\n1.ENQUEUE-INSERT\N2.DEQUEUE-DELETE\n3.DISPLAY\N4.exit\n");
		printf("enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enqueue-Insertion Operation\n");
				enqueue();
				break;
			case 2:
			printf("dequeue-deletion opertation\n");
			dequeue();
			break;
			case 3:
			printf("Displau operation\n");
			display();
			break;
			case 4:
			exit(0);
			default:
			printf("INVALID CHOICE\n");
			}
			}
			}

			void enqueue()
			{
				if((rear+1) % SIZE==front)
				{
					printf("queue overflow\n");
				}else{
				if(front==-1 && rear==-1)
				{
					front=rear=0;
				}
				else,
				{
				rear=(rear+1)%SIZE;
				}
				printf("enter the element:");
				scanf("%d",&queue[rear]);
				}
				}
				void dequeue()
				{
				if((front==-1)&&(rear==-1))
				{
				printf("queue underflow");
				}
				else if(front==rear){				{ printf("the dequeued element is %d",queue[front]);
				front=-1;

				rear=-1;
				}
				else
				{
				printf("\nthe dequeued elemeny is %d ",queue[front]);
				front=(front+1)%SIZE;
				}
				}
				void display()
				{
				int i=front;
				if(front==-1&&rear==-1)
				{
				printf("queue is empty \n");
				}
				else{
				printf"\n element in queue:");

				while(i!=rear)
				{
					printf("\n elements in a queue are:");
					while(i!=rear)
					{
					 printf("%d\t",queue[i]);
					 i=(i+1)%SIZE;
					 }
					 printf("%d\t",queue[rear]);
				   }

			      }     			 }