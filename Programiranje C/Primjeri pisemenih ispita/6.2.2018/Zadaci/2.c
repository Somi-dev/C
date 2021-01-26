#include <stdio.h>

void zbrojZnamenki(int n) {
   int suma = 0;
   while (n > 0) {
      suma += n % 10;
      n /= 10;
   }
   printf("%d\n", suma);
}

void djelitelj(int n) {
   for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
         zbrojZnamenki(i);
      }
   }
}

int main(void) {
   djelitelj(24578);

   return 0;
}