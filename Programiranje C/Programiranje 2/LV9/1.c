#include <stdio.h>
int cnt = 1;
FILE *ulaz = NULL;
void piramida(unsigned int n) {
   ulaz = fopen("pyramid.txt", "a");
   if (n == 0) {
      return;
   }
   for (int i = 0; i < n - 1; i++) {
      printf(" ");
      fprintf(ulaz, " ");
   }
   for (int i = 0; i < cnt; i++) {
      printf("*");
      fprintf(ulaz, "*");
   }
   printf("\n");
   fprintf(ulaz, "\n");
   cnt += 2;
   fclose(ulaz);
   piramida(n - 1);
}

int main(void) {
   unsigned int n;
   printf("Unesite visinu piramide <= 30: ");
   while (scanf("%u", &n), n > 30) {
      printf("n <= 30");
   }
   piramida(n);
   return 0;
}
