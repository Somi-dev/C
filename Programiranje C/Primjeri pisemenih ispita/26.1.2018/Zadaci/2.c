#include <stdio.h>

int faktorijeli(int n) {
   int f = 1;
   if (n < 0) return -1;
   /*  if (n == 0) {
      return 1;
   } else {
      return n * faktorijeli(n - 1);
   } */
   for (int i = 1; i <= n; i++) {
      f *= i;
   }
   return f;
}

void zbrojZnamenki(int n) {
   int suma = 0;
   while (n > 0) {
      suma += n % 10;
      n /= 10;
   }
   printf("Zbroj znamenki je: %d", suma);
}

int main(void) {
   int rez = faktorijeli(11);
   zbrojZnamenki(rez);
   return 0;
}