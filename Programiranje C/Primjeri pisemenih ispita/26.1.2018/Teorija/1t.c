#include <stdio.h>

void funk(int i) {
   if (i % 2 == 1 || i % 2 == -1) {  // == umjesto 1 i nadodati == -1 za negativne neparne brojeve
      printf("%d\n", i - 1);
   } else {  // moze samo else
      printf("%d\n", i);
   }
}

int main(void) {
   int i;
   for (i = -10; i < 30; i++) {  // ; umjesto ,
      funk(i);
   }

   return 0;
}