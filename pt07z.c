#include<stdio.h>
#include<stdlib.h>

struct adj
	{
	int index;
	struct adj *next;
	};

struct adj graph[10001];
int visited[10001],max,store[10001];

void add(int v,int u)
	{
	struct adj *temp=(struct adj*)malloc(sizeof(struct adj));
        temp->index=u;
	struct adj *start = &graph[v];
	temp->next = start->next;
	start->next=temp;

	struct adj *temp2=(struct adj*)malloc(sizeof(struct adj));
        temp2->index=v;
        struct adj *start2 = &graph[u];
	temp2->next = start2->next;
        start2->next=temp2;
	}


void dfs(int v)
	{
	visited[v]=1;
	struct adj *start = &graph[v];
	start=start->next;
	while(start!=NULL)
		{
		if(visited[start->index]==0)
			{
			dfs(start->index);

			if(max<store[v]+store[start->index]+1)
				max = store[v]+store[start->index]+1;

			if(store[v]<store[start->index]+1)
				store[v]=store[start->index]+1;
			}
		start=start->next;
		}

	}



int main()
{
int n,j,u,v;


	scanf("%d",&n);
	max=0;
	
	for(j=0;j<n-1;j++)
		{
		scanf("%d %d",&u,&v);
		add(u,v);
		}

	dfs(1);
	printf("%d\n",max);	
return 0;
}
