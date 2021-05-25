#include <stdio.h>
#define SREDINA(dg, gg) (dg + gg) / 2

void swap(int *x, int *y) {
   int aux;
   aux = *x;
   *x = *y;
   *y = aux;
}

void quickSort(int a[], int low, int high) {
   int i = low, j = high;
   int s = a[(low + high) / 2];
   while (i <= j) {
      while (a[i] < s) {
         i++;
      }
      while (a[j] > s) {
         j--;
      }
      if (i <= j) {
         swap(&a[i], &a[j]);
         i++;
         j--;
      }
   }
   if (low < j) quickSort(a, low, j);
   if (i < high) quickSort(a, i, high);
}

int main(void) {
   FILE *ulaz = NULL;
   int polje[500];
   int broj;
   int n;

   n = sizeof(polje) / sizeof(int);

   ulaz = fopen("in1.txt", "r");
   for (int i = 0; i < n; i++) {
      fscanf(ulaz, "%d", &polje[i]);
   }

   while (scanf("%d", &broj), broj < 1 || broj > 1000) {
      printf("Neispravan unos, interval [0, 1000]");
   }

   quickSort(polje, 0, n);

   int s, dg, gg;
   dg = 0, gg = n;
   while (dg <= gg) {
      s = SREDINA(dg, gg);
      if (broj == polje[s]) {
         printf("Broj je pronadjen");
         break;
      } else if (broj > polje[s]) {
         dg = s + 1;
      } else if (broj < polje[s]) {
         gg = s - 1;
      }
      if (dg > gg) printf("Broj nije pronadjen!");
   }

   return 0;
}