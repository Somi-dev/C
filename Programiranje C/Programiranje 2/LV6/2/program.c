#include <stdio.h>
#include "myheader.h"

void ispisRacuna(Racun *r) {
  int i;
  float cijena;
  int kolicina;
  printf("REZULTATI:\n");
  printf("Kupac: %s\n", r->kupac);
  printf("Prodavac: %s\n", r->prodavac);
  printf("-----------------------------\n");
  printf("Artikli: \n");
  printf("rb   naziv                    kolicina    cijena    ukupno\n");
  for (i = 0; i < r->broj_artikala; i++) {
    cijena = r->artikli[i].cijena;
    kolicina = r->artikli[i].kolicina;
    printf("%-4d %-25s %-10d %-10.2f %.2f\n", i+1, r->artikli[i].naziv, kolicina, cijena, kolicina*cijena);
  }
  printf("\nUkupan iznos racuna: %.2f", r->ukupan_iznos);
}

int main(void)
{
  int n, m;
  Racun racun;

  unesiPodatkeRacuna(&racun);

  ispisRacuna(&racun);

	return 0;
}

