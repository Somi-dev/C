#include <stdio.h>

struct datum {
   unsigned int dan;
   unsigned int mjesec;
   unsigned int godina;
};

struct ucenici {
   char ime[20];
   char prezime[20];
   char maticni[12];
   float prosjek;
   struct datum datumRodjenja;
} u[2];

int main(void) {
   int max = 0;
   int maxi;
   for (int i = 0; i < 2; i++) {
      printf("Ime:\n");
      scanf("%19s", &u[i].ime);
      printf("Prezime:\n");
      scanf("%19s", &u[i].prezime);
      printf("Maticni:\n");
      scanf("%11s", &u[i].maticni);
      printf("Prosjek:\n");
      scanf("%f", &u[i].prosjek);
      printf("Datum rodenja (dan, mjesec, godina):\n");
      scanf("%u %u %u", &u[i].datumRodjenja.dan, &u[i].datumRodjenja.mjesec, &u[i].datumRodjenja.godina);

      if (u[i].prosjek > max) {
         maxi = i;
      }
   }

   printf("REZULTAT:\n%s %s", u[maxi].ime, u[maxi].prezime);

   return 0;
}