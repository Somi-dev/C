#include <stdio.h>

int main(void) {
   int n, min, max, *p = NULL;

   printf("Upisite broj clanova polja[4,19>: ");
   while (scanf("%d", &n), n < 4 || n >= 19) {
      printf("Neispravan broj");
   }

   int polje[n];
   p = polje;

   for (int i = 0; i < n; i++) {
      scanf("%d", p + i);
   }

   min = max = *p;
   for (int i = 1; i < n; i++) {
      min = min > *(p + i) ? *(p + i) : min;
      max = max < *(p + i) ? *(p + i) : max;
   }

   printf("Razlika najveceg i najmanjeg elementa polja: %d", max - min);

   return 0;
}
