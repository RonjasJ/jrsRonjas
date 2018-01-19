#include<stdio.h>
int main()
{
int n,flag=0,i;
printf("enter number");
scanf("%d",&n);
for(i=0;i<n/2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("yes");
else
printf("not");
}
