#include <stdio.h> 
void main()
{
   int a, b, t; 
   printf("Enter the value of a and b");
   scanf("%d%d", &a, &b); 
   printf("Before Swapping a = %db = %d",a,b); 
   t = a;
   a   = b;
   b    = t; 
   printf("After Swappinga = %db = %d",a,b);
 }
