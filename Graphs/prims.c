#include<stdio.h>
int a[50][50],vi[50],max,n;
void reset()
{
	for(int i=1;i<=n;i++)
		vi[i]=0;
}

int nodes()
{
for(int i=1;i<=n;i++)
	if(vi[i]==0)
		return 1;
}

int main()
{
	int x,I,J,root=1,min=-1,addition=0;
	printf("Enter number of nodes : \n");
	scanf("%d",&n);	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(i!=j)
			{
				printf("Enter the edge cost for edge between %d and  %d ",i,j);
				scanf("%d",&x);
				a[i][j]=x;
				a[j][i]=x;
			}
			else if(i==j)
				a[i][j]=0;
		}
	}
	printf("Adjacency matrix is :\n");

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			printf("%d   " ,a[i][j]);
		printf("\n");
	}
	
	reset();
	printf("Enter root\n");
	scanf("%d",&root);
	vi[root]=1;
	printf("Spanning tree is :\n");
	
	while(nodes()==1)
	{
		min=999999;
		for(int i=1;i<=n;i++)
		{	
			if(vi[i]==1)
			{
				for(int j=1;j<=n;j++)
					if(vi[j]==0 && a[i][j]!=0)
					{
						if(a[i][j]<min)
						{
							I=i;
							J=j;	
							min=a[i][j];
						}
					}
			}
		}
		vi[J]=1;
		printf("%d ---> %d \n", I ,J);
		addition+=min;
	
	}
	
	printf("Total cost is : ");
	printf("%d\n",addition);
	return 0;
}