#include<stdio.h>

int main()
{

int i,j,t,a1,a2,b1,b2;
char c[10],d[10];
int a[8][8] = {0,3,2,3,2,3,4,5,0,2,1,2,3,4,3,4,0,0,4,3,2,3,4,5,0,0,0,2,3,4,3,4,0,0,0,0,4,3,4,5,0,0,0,0,0,4,5,4,0,0,0,0,0,0,4,5,0,0,0,0,0,0,0,6};

scanf("%d",&t);

for(i=0;i<t;i++)
	{
	scanf("%s",c);
	scanf("%s",d);

	a1 = d[0] - c[0];
	a2 = d[1] - c[1];

	if(a1<0)
		a1 = -1*a1;

	if(a2<0)
		a2 = -1*a2;


	if(a[a1][a2]==0)
		printf("%d\n",a[a2][a1]);

	else
		printf("%d\n",a[a1][a2]);

	
	}
return 0;
}
