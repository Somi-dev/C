/* Kako bi autograder mogao uspjesno upisati strukturu u datoteku
morate koristiti ovako definirane strukture*/

#include <stdio.h>
#include <stdlib.h>

#include "headerD.h"

FILE *prviTok = NULL;
FILE *drugiTok = NULL;

void createData() {
   prviTok = fopen("clanovi.txt", "ab");
   if (!prviTok) {
      printf("Neuspjesan pokusaj ulaska u datoteku!");
   }
   fclose(prviTok);
}
void readData(int *n) {
   prviTok = fopen("clanovi.txt", "rb");
   for (int i = 0; i < *n; i++) {
      fread(&data[i], sizeof(struct podaci), 1, prviTok);
      printf("Prezime: %s\n", data[i].prezime);
      printf("Ime: %s\n", data[i].ime);
      printf("Sifra: %d\n", data[i].sifra);
      printf("Adresa: %s\n", data[i].adresa);
      printf("Broj: %d", data[i].br_tel);
   }
   fclose(prviTok);
}
void noviClanovi(int *n) {
   prviTok = fopen("clanovi.txt", "ab");

   if (!prviTok) {
      printf("Neuspjesan pokusaj ulaska u datoteku!");
   }
   scanf("%s", &data[*n].prezime);
   scanf("%s", &data[*n].ime);
   scanf("%d%*c", &data[*n].sifra);
   scanf("%[^\n]s", &data[*n].adresa);
   scanf("%d", &data[*n].br_tel);
   fwrite(&data[*n], sizeof(struct podaci), 1, prviTok);
   (*n)++;
   fclose(prviTok);
}

int provjeraFilmova(int sif) {
   drugiTok = fopen("posudba.txt", "rb");
   int i = 0, f = 0;
   while (fread(&dataF[i], sizeof(struct posudba), 1, drugiTok) != 0) {
      if (dataF[i].sif == sif) f++;
      i++;
   }
   fclose(drugiTok);
   return f;
}

void posudbaFilma() {
   drugiTok = fopen("posudba.txt", "ab");

   if (!drugiTok) {
      printf("Neuspjesan pokusaj ulaska u datoteku!");
   }
   fclose(drugiTok);

   int n, f, sifra;
   while (scanf("%d%*c", &n), n >= 4) {
      printf("Maksimalno mozete posuditi 3 filma.");
   }

   scanf("%d%*c", &sifra);

   f = provjeraFilmova(sifra);

   if (n + f >= 4) {
      printf("Ogranicen broj posudenih < 4");
      return;
   }

   drugiTok = fopen("posudba.txt", "ab");

   for (int i = 0; i < n; i++) {
      dataF[i].sif = sifra;
      scanf("%[^\n]s", &dataF[i].ime_filma);
      while (scanf("%d%*c", &dataF[i].datum), dataF[i].datum >= 365) {
         printf("Nevaljan unos");
      }
      fwrite(&dataF[i], sizeof(struct posudba), 1, drugiTok);
   }

   rewind(drugiTok);
   for (int i = 0; i < n + f; i++) {
      fread(&dataF[i], sizeof(struct posudba), 1, drugiTok);
      printf("Ime filma: %s\n", dataF[i].ime_filma);
      printf("Datum: %d\n", dataF[i].datum);
      printf("Sifra: %d\n", dataF[i].sif);
   }
   fclose(drugiTok);
}

void exitStream() {
   exit(EXIT_SUCCESS);
}

int main(void) {
   int odabir, n = 0;
   int *brojac = &n;
   while (1) {
      scanf("%d%*c", &odabir);
      switch (odabir) {
         case 1:
            createData();
            break;

         case 2:
            readData(brojac);
            break;

         case 3:
            noviClanovi(brojac);
            break;

         case 4:
            posudbaFilma();
            break;

         case 5:
            exitStream();
            break;
      }
   }

   return 0;
}

/*
Ulazni podaci u program su zapisani ispod. Tekst poslije znaka # označava komentar
linije i ne predstavlja ulaz u program:
1               # kreiranje filea
3               # upis podataka o clanu
Peric                                                                   
Pero                                                                       
1               #sifra clana                                                                  
Osjecka 132     #adresa                                                        
12345           #br tel
4               #izbornik posudbe
2               #broj filmova za posudbu                                  
1               #sifra clana koji posudjuje film                                              
Mrak film 1     #naziv filma
34              #dan posudbe
Mrak film 2     #naziv filma
35              #dan posudbe
5               #zavrsetak rada programa
*/
