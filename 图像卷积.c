#include<stdio.h>
int juanji(int *x,int *h,int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+(*(x+i))*(*(h+i));
	}
	return sum;
}
int main(void)
{
	int a,b,sum;
	scanf("%d %d",&a,&b);
	int x[a+b][a+b],h[b][b],y[a][a];
	for(int i=0;i<a+b;i++)
	{
		for(int j=0;j<a+b;j++)
		{
			x[i][j]=0;
		}
	}
	for(int i=b/2;i<a+b/2;i++)
	{
		for(int j=b/2;j<a+b/2;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(int i=b-1;i>=0;i--)
	{
		for(int j=b-1;j>=0;j--)
		{
			scanf("%d",&h[i][j]);
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			sum=0;
			for(int k=0;k<b;k++)
			{
				sum=juanji(&x[i+k][j],h[k],b)+sum;
			}
			y[i][j]=sum;
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}
	return 0;
}
