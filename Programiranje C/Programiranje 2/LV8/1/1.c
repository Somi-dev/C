/* Kako bi autograder mogao uspjesno upisati strukturu u datoteku
morate koristiti ovako definirane strukture 
*/

#include <stdio.h>
#include <stdlib.h>

#include "headerJ.h"

void createData() {
   FILE *ulaz = NULL;
   ulaz = fopen("clanovi.txt", "ab");
   if (!ulaz) {
      printf("Neuspjesan pokusaj ulaska u datoteku!");
   }
   fclose(ulaz);
}
void readData(struct podaci *data, int *n) {
   FILE *ulaz = NULL;
   ulaz = fopen("clanovi.txt", "rb");
   for (int i = 0; i < *n; i++) {
      fread(&data[i], sizeof(struct podaci), 1, ulaz);
      printf("Prezime: %s\n", data[i].prezime);
      printf("Ime: %s\n", data[i].ime);
      printf("Sifra: %d\n", data[i].sifra);
      printf("Adresa: %s", data[i].adresa);
      printf("Broj: %d", data[i].br_tel);
   }
   fclose(ulaz);
}
void noviClanovi(struct podaci *data, int *n) {
   FILE *ulaz = NULL;
   ulaz = fopen("clanovi.txt", "ab");
   if (!ulaz) {
      printf("Neuspjesan pokusaj ulaska u datoteku!");
   }
   scanf("%s", &data[*n].prezime);
   scanf("%s", &data[*n].ime);
   scanf("%d%*c", &data[*n].sifra);
   fgets(data[*n].adresa, 200, stdin);
   scanf("%d", &data[*n].br_tel);
   fwrite(&data[*n], sizeof(struct podaci), 1, ulaz);
   (*n)++;
   fclose(ulaz);
}
void exitStream() {
   exit(EXIT_SUCCESS);
}

int main(void) {
   struct podaci data[10];
   int odabir, n = 0;
   int *brojac = &n;
   while (1) {
      scanf("%d%*c", &odabir);
      switch (odabir) {
         case 1:
            createData();
            break;

         case 2:
            readData(data, brojac);
            break;

         case 3:
            noviClanovi(data, brojac);
            break;

         case 4:
            exitStream();
            break;
      }
   }

   return 0;
}