#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct podaci {
   char prezime[20];
   char ime[20];
   int sifra;
   char adresa[100];
   int br_tel;
} data[10];

struct posudba {
   char ime_filma[20];
   int datum;
   int sif;
} dataF[10];

void createData();
void readData(int *n);
void noviClanovi(int *n);
void posudbaFilma();
void exitTok();

#endif