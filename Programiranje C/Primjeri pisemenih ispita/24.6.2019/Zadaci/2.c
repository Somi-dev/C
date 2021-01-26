#include <stdio.h>

int zamjena(int a) {
   int dekjed = 1;
   while (a > 9 || a < -9) {
      a /= 10;
      dekjed *= 10;
   }

   return a * dekjed;
}

float aritSred(int a, int b, int c) {
   float suma = 0;
   suma = zamjena(a) + zamjena(b) + zamjena(c);

   return suma / 3;
}
int main(void) {
   printf("%f", aritSred(-12597, 1305, 7));
   return 0;
}