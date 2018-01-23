#include<stdio.h>
int main()
{
  int num, i=0, sum=0, d;
  printf ("Enter an integer value: \n");
  scanf ("%d", &num);
  while (num!=0)
  {
    d = num %10;
    sum=sum+d;
    num = num /10;
    }
    printf("%d",sum);
}
