#include <stdio.h>
int main(void) 
{
	int a[1000],i,lim,k;
	printf("enter the numbers");
	scanf("%d %d",&lim,&k);
	for(i=0;i<lim;i++)
	scanf("%d",&a[i]);
	for(i=0;i<lim;i++)
	{
if(a[i]==k)
{
printf("yes");
break;
    
}
	}
	return 0;
}
