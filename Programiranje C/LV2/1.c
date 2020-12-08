#include <stdio.h>

int main(void) {
   int w, c;

   do {
      scanf("%d", &w);  // nedostaje operator &

   } while (w <= 0);  // nedostaje znak za kraj naredbene linije (;)

   for (c = 1; c <= w; c++)  // zamijeniti , sa ;
      if (c % 2 == 1)        // nepravilni operator za jednakost (==)
         printf("%d\n", c);  // ""

   return 0;  // treba odvojiti 0 od naredbe return
}