#include<stdio.h>
int b[100000],top=-1;
void push(int num)
{
    ++top;
    b[top]=num;
}
void pop(void)
{
    top--;
}
 
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,flag=-1;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    for(j=1;j<=n;j++)
    {
       if(j==b[top])
       pop();
       else
       {
           flag=-1;
           for(;i<n;)
           {
               if(j==a[i])
               {i++;
               flag=0;
               break;}
               else
               push(a[i++]);
           }
           if(flag==-1)
           break;
       }
        
    }
    if(flag==-1)
    printf("Sad\n");
    else
    printf("Happy\n");
    
}
