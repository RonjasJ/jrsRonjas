#include <stdio.h>
int main()
{
    int n,k,a[100],i;
    printf("enter the n and k value");
    scanf("%d %d",&n,&k);
    printf("enter the n values");   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the kth number is %d",a[k-1]);
    return 0;
}
