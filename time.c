#include <stdio.h>
#include <time.h>
#define LEN 150
int main ()
{
   char buf[LEN];
   time_t curtime;
   struct tm *loc_time;
   curtime = time (NULL);
   loc_time = localtime (&curtime);
   printf("%s", asctime (loc_time));
   strftime (buf, LEN, "Today is %A, %b %d.\n", loc_time);
   fputs (buf, stdout);
   strftime (buf, LEN, "Time is %I:%M %p.\n", loc_time);
   fputs (buf, stdout)
}
