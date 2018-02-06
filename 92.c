#include <stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("enter the n value");
    scanf("%d",&n);
    printf("enter the n numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       sum=sum+a[i];
   }
   printf("sum= %d",sum);
    return 0;
}



