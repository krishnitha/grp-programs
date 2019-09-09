#include<stdio.h>
#define N 100000
void main()
{
	int i,j,a[N];
	int count,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		count=0;
		for(j=i+1;j<n;j++){
			if(a[i]>=a[j])
				count++;
			else
			    break;
		}
		if(count==(n-i-1))
			printf("%d ",a[i]);
	}
}
