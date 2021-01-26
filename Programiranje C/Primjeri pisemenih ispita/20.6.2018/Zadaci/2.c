#include <stdio.h>

int brojDjelitelja(int a) {
   int brojac = 0;
   for (int i = 1; i <= 5000 && i <= a; i++) {
      if (a % i == 0) brojac++;
   }

   return brojac;
}

int najveciBrojDjelitelja(int a, int b) {
   int max = 0, maxDjelitelj = 0;
   for (int i = a; i <= b; i++) {
      if (brojDjelitelja(i) > maxDjelitelj) max = i;
   }
   return max;
}

int main(void) {
   printf("%d", najveciBrojDjelitelja(1, 5000));
   return 0;
}