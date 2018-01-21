#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
int i; 
 int count=0;
char s[100];
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{	
if(isdigit(s[i]))
{
count++;
}
}
printf("count: %d ",count);
}
