#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter values");
	scanf("%d %d %d",&a,&b,&c);
	d=a*b%c;
	printf("%d",d);
	return 0;
}
