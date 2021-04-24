#include <stdio.h>

int sumaZnamenaka(int n) {
   if (n > 0)
      return n % 10 + sumaZnamenaka(n / 10);
   else
      return 0;
}

int main(void) {
   FILE *ulaz = NULL;
   int n;
   printf("Upisite cijeli broj: ");
   scanf("%d", &n);
   printf("Suma znamenaka je: %d", sumaZnamenaka(n));
   ulaz = fopen("suma.txt", "w");
   fprintf(ulaz, "%d", sumaZnamenaka(n));
   fclose(ulaz);
   return 0;
}
