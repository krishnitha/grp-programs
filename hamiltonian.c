#include<stdio.h>
#define N 100000
void main()
{
	int k,j,a[N];
	int count,i;
	scanf("%d",&i);
	for(k=0;k<i;k++)
		scanf("%d",&a[k]);
	for(k=0;k<i;k++)
	{
		count=0;
		for(j=k+1;j<i;j++)
		{
			if(a[k]>=a[j])
				count++;
			else
			    break;
		}
		if(count==(i-k-1))
			printf("%d ",a[k]);
	}
}
