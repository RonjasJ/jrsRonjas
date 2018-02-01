#include<stdio.h>
int main()
{
    int a,b;
    printf("enter number");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        if(b%2==1)
        printf("%d\n",b);
        a=a/10;
    }
    return 0;
}
