  
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t,n,k;
    scanf("%d",&t);
    for(int p=1;p<=t;p++)
    {
        int count=0;
        scanf("%d%d",&n,&k);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int low=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]<low)
            {
                low=a[i];
            }
        }
        while(low<k)
        {
            low++;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
