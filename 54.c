#include<stdio.h>
void main()
{
int num,nearnum=0;
printf("Enter the number");
scanf("%d",&num);
printf("%d",num);
if(num/2==0)
{
nearnum=num-1;
printf("\n%d is the nearer less number",nearnum);
}
else
{
nearnum=num-2;
printf("\n%d is the nearer less number",nearnum);
}
}
