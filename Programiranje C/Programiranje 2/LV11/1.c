#include <stdio.h>

int main(void) {
   FILE *ulaz = NULL;
   int polje[500];
   int n, x, i, zastavica = 0;

   n = sizeof(polje) / sizeof(int);

   ulaz = fopen("in1.txt", "r");
   for (i = 0; i < n; i++) {
      fscanf(ulaz, "%d", &polje[i]);
   }

   while (scanf("%d", &x), x < 1 || x > 1000) {
      printf("Neispravan unos, interval [0, 1000]");
   }

   for (i = 0; i < x; i++) {
      if (polje[i] == x) {
         zastavica = 1;
         break;
      }
   }

   if (zastavica)
      printf("Broj %d je pronadjen nakon %d koraka\n", x, i + 1);
   else
      printf("Broj %d nije pronadjen.\n", x);

   return 0;
}