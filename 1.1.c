#include <stdio.h>

FILE *ulaz = NULL;

void piramida(unsigned int n) {
   static int count = 0;

   if (n) {
      ++count;
      piramida(n - 1);
      ulaz = fopen("piramida.txt", "a");
      for (unsigned int i = 0; i < 2 * n - 1; i++) {
         printf("%*c", i == 0 ? count : 1, '*');
         fprintf(ulaz, "%*c", i == 0 ? count : 1, '*');
      }
      printf("\n");
      fputc('\n', ulaz);
      --count;
   }
   fclose(ulaz);
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