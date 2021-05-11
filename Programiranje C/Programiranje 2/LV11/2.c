#include <stdio.h>

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
   int brojevi[5], koraciS[5] = {0}, koraciB[5] = {0};
   int n, m;

   n = sizeof(polje) / sizeof(int);
   m = sizeof(brojevi) / sizeof(int);

   ulaz = fopen("in1.txt", "r");
   for (int i = 0; i < n; i++) {
      fscanf(ulaz, "%d", &polje[i]);
   }

   for (int i = 0; i < m; i++) {
      while (scanf("%d", &brojevi[i]), brojevi[i] < 1 || brojevi[i] > 1000) {
         printf("Neispravan unos, interval [0, 1000]");
      }
   }

   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         if (polje[j] == brojevi[i]) {
            break;
         }
         koraciS[i]++;
      }
   }

   quickSort(polje, 0, n);

   int s, dg, gg;
   for (int i = 0; i < m; i++) {
      dg = 0, gg = n;
      while (dg <= gg) {
         s = (dg + gg) / 2;
         if (brojevi[i] == polje[s]) {
            break;
         } else if (brojevi[i] > polje[s]) {
            dg = s + 1;
            koraciB[i]++;
         } else if (brojevi[i] < polje[s]) {
            gg = s - 1;
            koraciB[i]++;
         }
         if (dg > gg) koraciB[i] = 0;
      }
   }

   printf("Sekvencijalno:\n");
   for (int i = 0; i < m; i++) {
      if (koraciS[i] != n)
         printf("Broj %d je pronadjen nakon %d koraka\n", brojevi[i], koraciS[i] + 1);
      else
         printf("Broj %d nije pronadjen.\n", brojevi[i]);
   }
   printf("Binarno:\n");
   for (int i = 0; i < m; i++) {
      if (koraciB[i])
         printf("Broj %d je pronadjen nakon %d koraka\n", brojevi[i], koraciB[i] + 1);
      else
         printf("Broj %d nije pronadjen.\n", brojevi[i]);
   }

   return 0;
}
