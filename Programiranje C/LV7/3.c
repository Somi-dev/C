#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nasumicnoPolje(double *p, int n) {
   double temp, DG, GG;
   DG = -2 * n;
   GG = 2 * n;
   srand((unsigned int)time(NULL));
   for (int i = 0; i < n; i++) {
      temp = (double)rand() / RAND_MAX * (DG - GG) + GG;
      if (temp != -n && temp != 0) {
         *(p + i) = temp;
      } else {
         i--;
      }
   }
}

int main(void) {
   int n;
   double *p = NULL;
   p = (double *)malloc(800 * sizeof(double));
   if (p == NULL) {
      exit(0);
   }
   printf("Unesite velicinu polja: ");
   scanf("%d", &n);
   nasumicnoPolje(p, n);
   for (int i = 0; i < n; i++) {
      printf("%.2lf\n", *(p + i));
   }
   free(p);
   return 0;
}