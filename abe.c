#include<stdio.h>
int main()
{
int i,c, b[10]={1,2,3,4,5,6,7,8,9,},maxi;
  printf("enter array term");
scanf("%d",&c);
maxi=b[0];
for(i=0;i<c;i++)
{
if(maxi>b[i])
maxi=b[i];
}
printf("%d",maxi);
}
