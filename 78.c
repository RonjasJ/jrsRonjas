#include <stdio.h>
int main()
{
  int  Number; 
   
  printf("\n Please Enter any number \n");
  scanf("%d", &Number);
      if(Number%13 == 0)
        {
		 printf("yes ");
		}
		else
		printf("no");
  return 0;
}
