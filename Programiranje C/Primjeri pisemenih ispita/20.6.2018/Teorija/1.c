#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPrime(int num) {
   for (int i = 2; i < num; i++) {  // int i
      if (!(num % i)) return 0;     // num % i, a ne num % 2
   }
   return 1;  // van zagrada
}

int main(void) {
   int r;
   srand((unsigned int)time(NULL));
   while (1) {
      r = 2 + rand();
      if (isPrime(r)) break;
   }
   printf("%d\n\n", r);
   return 0;
}