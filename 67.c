#include<stdio.h>
int main()
{
	int n,r,d,s;
	scanf("%d",&n);
	r=n%10;
	d=10-r;
	s=n+d;
	printf("%d",s);
  return 0;
}
