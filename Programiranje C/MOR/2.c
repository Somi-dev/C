#include <stdio.h>

int main(void) {
   int n;
   _Bool zastavica = 0;
   printf("Upisite cijeli broj: ");
   scanf("%d", &n);

   for (int i = 2; i < n; i++) {
      if (i != n && n % i == 0) {
         zastavica = 1;
         break;
      }
   }

   if (zastavica) {
      printf("Broje je složen!");
   } else if (zastavica) {
      printf("Broj je prost!");
   } else if (n == 1) {
      printf("Broj 1 nije niti prost niti slozen");
   }

   return 0;
}