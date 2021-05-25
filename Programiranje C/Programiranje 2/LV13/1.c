#include <stdio.h>

enum dani { ponedjeljak = 1,
            utorak,
            srijeda,
            cetvrtak,
            petak,
            subota,
            nedjelja };

int main(void) {
   int dan;
   printf("Unesite koji je dan u tjednu[1,7]: ");
   while (scanf("%d", &dan), dan < 1 || dan > 7) {
      printf("Unesite koji je dan u tjednu[1,7]: ");
   }
   if (dan == subota || dan == nedjelja) {
      printf("Vikeeeend!");
   } else {
      printf("Radis jos %d dana do vikenda", subota - dan);
   }

   return 0;
}