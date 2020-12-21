#include <stdio.h>

int zbrojz(int a) {
   int broj, rez;
   broj = a % 10;
   if (a == 0) {
      return 0;
   } else if (a > 0) {
      rez = broj + zbrojz(a / 10);
   }
}

int main(void) {
   int broj;
   scanf("%d", &broj);
   printf("%d", zbrojz(broj));
   return 0;
}
