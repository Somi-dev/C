#include <stdio.h>

int main(void) {
   int sum;
   float sredina;

   for (int i = 100; i <= 999; i++) {
      if ((i % 10) % 3 == 0) {
         printf("%d ", i);
      }
      sum += i;
   }

   sredina = ((sum * 1.f) / 900);
   printf("\nAritmeticka sredina ispisanih brojeva: %f", sredina);

   return 0;
}