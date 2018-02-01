#include <stdio.h>
int main()
{
  char ch;
 
  printf("Input a character\n");
  scanf("%c", &ch);
    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
      printf("vowel present");
    else
      printf("no vowel" ); 
  return 0;
}
