#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct podaci {
   char prezime[20];
   char ime[20];
   int sifra;
   char adresa[100];
   int br_tel;
};

void createData();
void readData(struct podaci *p, int *n);
void noviClanovi(struct podaci *p, int *n);
void exitTok();

#endif