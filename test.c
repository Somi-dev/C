#include <stdio.h>

int zbrojz(int a) {
   int rez = 0;
   while (a > 0) {
      rez += a % 10;
      a /= 10;
   }
   if (rez > 9) {
      zbrojz(rez);
   } else {
      return rez;
   }
}

int main(void) {
   int broj;
   scanf("%d", &broj);
   printf("%d", zbrojz(broj));
   return 0;
}
