#include <stdio.h>

int main(void) {
   int a, *p = NULL;
   printf("Upisite cijeli broj: ");
   scanf("%d", &a);
   p = &a;

   *p = *p > 0 ? *p * 2 : *p / 2;

   printf("Adresa(dec): %d\nAdresa(hex): %p\nVrijednost: %d", p, p, *p);

   return 0;
}