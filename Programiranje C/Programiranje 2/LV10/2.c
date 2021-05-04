#include <stdio.h>
#include <stdlib.h>

typedef struct artikl {
   char *naziv;
   float cijena;
   int kolicina;
} artikl_t;

typedef struct racun {
   char *prodavac;
   char *kupac;
   artikl_t *artikli;
   int broj_artikala;
   float ukupan_iznos;
} racun_t;

int main(void) {
   char string[50];
   racun_t novi;
   int n;
   float suma = 0;

   FILE *ulaz = NULL;
   ulaz = fopen("racun.txt", "r");

   fgets(string, sizeof(string), ulaz);
   fgets(string, sizeof(string), ulaz);
   fscanf(ulaz, "%d", &n);
   fgets(string, sizeof(string), ulaz);

   novi.artikli = (artikl_t *)malloc(n * sizeof(artikl_t));

   for (int i = 0; i < n; i++) {
      artikl_t trenutni = novi.artikli[i];
      trenutni.naziv = string;
      fscanf(ulaz, "%[^\n]s", trenutni.naziv);
      fscanf(ulaz, "%f\n", &trenutni.cijena);
      fscanf(ulaz, "%d\n", &trenutni.kolicina);

      printf("Naziv : %s Cijena: %f, kolicina %d\n", trenutni.naziv, trenutni.cijena, trenutni.kolicina);
      suma += (trenutni.cijena * trenutni.kolicina);
   }

   printf("Ukupan iznos racuna: %.2f", suma);
   fclose(ulaz);

   return 0;
}