#include <stdio.h>

int divisorCount(int num) {
   int dc = 0, d;
   /*num < 0 ? -num : num;  // sta ce mi */
   for (d = 1; d <= num; d++)
      if (num % d == 0)
         ++dc;

   return dc;
}

int main(void) {
   int r;
   r = divisorCount(12967);
   printf("%d\n", r);

   return 0;
}