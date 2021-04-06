#ifndef MYHEADER_H
#define MYHEADER_H

typedef struct tocka {
    float x;
    float y;
    float z;
} Tocka;
typedef struct trokut {
    struct tocka *t1;
    struct tocka *t2;
    struct tocka *t3;
} Trokut;

void unesiTocke(Tocka*, int);
void unesiTrokute(Trokut*, Tocka*, int);
float pronadjiNajveciOpseg(Trokut*, int);
/* Ukoliko koristite dodatne funkcije mozete ih navesti nakon ovog komentara */

float modulStranica(Tocka*, Tocka*);
float opseg(Trokut*);



#endif
