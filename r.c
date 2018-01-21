#include <stdio.h>
void sort_numbers_ascending(int number[], int count)
{
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
   printf("Numbers in ascending order:\n");
   for (i = 0; i < count; ++i)
      printf("%d\n", number[i]);
      printf("meddile number%d", count/2);
}
void main()
{
   int i, count, number[20]={7,3,1,8,9,4,2}; 
   printf("How many numbers you are gonna enter:");
   scanf("%d", &count);  
   for (i = 0; i < count; ++i) 
   sort_numbers_ascending(number, count);
}
