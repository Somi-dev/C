#include <stdio.h>
#define MAX 10

int prvi(int a) {
   int prvi = a;
   while (prvi >= 10) {
      prvi /= 10;
   }
   return prvi;
}

int main(void) {
   int polje[MAX];
   int suma = 0;
   printf("Upisite 10 cijelih brojeva: ");
   for (int i = 0; i < 10; i++) {
      scanf("%d", &polje[i]);
      suma += prvi(polje[i]);
   }
   printf("Suma prvih znamenki brojeva je: %d", suma);

   return 0;
}