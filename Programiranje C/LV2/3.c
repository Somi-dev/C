#include <stdio.h>

int main(void) {
   int a = 0, b = 0, c = 0, d = 0, f = 0;
   char ocjena;

   do {
      printf("Unesite ocjene od A - F, kada zavrsite unesite znak !: ");
      scanf(" %c", &ocjena);

      switch (ocjena) {
         case 'A':
         case 'a':
            a++;
            break;
         case 'B':
         case 'b':
            b++;
            break;
         case 'C':
         case 'c':
            c++;
            break;
         case 'D':
         case 'd':
            d++;
            break;
         case 'F':
         case 'f':
            f++;
            break;
         default:
      }

   } while (ocjena != '!');

   printf("A: %d\nB: %d\nC: %d\nD: %d\nF: %d", a, b, c, d, f);

   return 0;
}