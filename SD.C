#include<stdio.h>
#include<conio.h>
int a[20][20],visited[20],stack[20],top=0,n,count=0;
void dfs(int v)
{
int i;
for(i=1;i<=n;i++)
{
if(a[v][i]&&!visited[i]) //If there exist an edge in adjacencymatrix "a"& that node is not there in visited array
stack[++top]=i; //Pushing that vertex into stack top
visited[i]=1; // Indicating that vertex has been visited by putting 1 in that particular index
count++; // Counting no. of nodes that have been visited
printf("\t%d",stack[top]);
dfs(i);
}
}
void main()
int i,j,v;
clrscr();
printf("\n Enter number of vertices: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
visited[i]=0; //Initializing all elements of "visited" array as 0
printf("Enter the adjancency matrix\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n:j++)
{
scanf("%d",&a[i][j]); // Elements Os or 1s are only entered in matrix form
}
}
printf("\nEnter starting vertex: ");
scanf("%d",&v);
printf("\nDFS: Nodes visited are \n");
stack[++top]=v;
visited[v]=1;
//Pushing starting vertex into the stack top
// Indicating starting node has been visited by putting 1 in that particular index
count++; // Counting no. of nodes that have been visited
printf("%d",stack[top]);
dfs(v);
printf("\nEnter starting vertex: "):
scanf("%d",&v);
printf("\nDFS: Nodes visited are \n");
stack[++top]=v;
visited[v]=1;
//Pushing starting vertex into the stack top
// Indicating starting node has been visited by putting 1 in that particular index
count++; // Counting no. of nodes that have been visited
printf("%d",stack[top]);
dfs(v);
if(count==n) // if no.of nodes visited(ie.count) is equal to no. of vertices
{
printf("\n Graph is connected");
}
else
{
printf("\n Graph is not connected");
}
getch();
}