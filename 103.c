#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	int i;
	printf("enter the string");
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
	if(name[i]>='a'&&name[i]<='z')
	printf("%3c",name[i]-32);
	printf("%c",name[i]);
	}
	return 0;
}
