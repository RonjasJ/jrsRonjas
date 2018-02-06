#include<stdio.h>
int main()
{
	int num,r,pro=1;
	printf("enter the value");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		pro=pro*r;
		num=num/10;
	}
	printf("%d",pro);
	return 0;
}
