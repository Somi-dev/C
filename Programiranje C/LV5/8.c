#include <stdio.h>
#include <stdlib.h>

int fakt(int a) {
   int f, broj, suma = 0;
   while (a > 0 || a < 0) {
      broj = a % 10;
      a /= 10;
      f = 1;
      for (int i = 1; i <= abs(broj); i++) {
         f *= i;
      }
      suma += f;
   }
   return broj > 0 ? suma : -suma;
}

int main(void) {
   int broj;
   scanf("%d", &broj);
   printf("%d", fakt(broj));
   return 0;
}