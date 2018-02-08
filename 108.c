#include<stdio.h>
int main()
{
int a,n,d,i,sum=0,next=0;
printf("enter the numbers");
scanf("%d %d %d",&a,&d,&n);
next=a;
for(i=0;i<n;i++)
{
	sum=sum+next;
	next=next+d;	
}
printf("%d",sum);
return 0;
}
