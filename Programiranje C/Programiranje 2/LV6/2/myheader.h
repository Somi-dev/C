#ifndef MYHEADER_H
#define MYHEADER_H

typedef struct artikl {
  char naziv[50];
  float cijena;
  int kolicina;
} Artikl;
typedef struct racun {
  char prodavac[50];
  char kupac [50];
  Artikl artikli[10];
  int  broj_artikala;
  float ukupan_iznos;
} Racun;

void unesiPodatkeRacuna(Racun*);

/* Ukoliko koristite dodatne funkcije mozete ih navesti nakon ovog komentara */


#endif
