#include <math.h>
#include <stdio.h>

int parniBrojevi(int n) {
   int suma = 0, dekjed = 1;
   while (n > 0) {
      if (n % 2 != 0) {
         suma += n % 10 * dekjed;
         dekjed *= 10;
      }
      n /= 10;
   }
   return suma;
}

int main(void) {
   printf("%d", parniBrojevi(78635));

   return 0;
}