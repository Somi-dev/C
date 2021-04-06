//ovdje pisete implementaciju potrebnih funkcija. 
//ukoliko zelite koristiti dodatne funkcije, njihove deklaracije
//mozete navesti u datoteci.
#include <math.h>
#include <stdio.h>
#include "myheader.h"

float modulStranica(Tocka *t1, Tocka *t2) {
    float x = (t2->x) - (t1->x);
    x *= x;
    float y = (t2->y) - (t1->y);
    y *= y;
    float z = (t2->z) - (t1->z);
    z *= z;
    return sqrt(x + y + z);
}

float opseg(Trokut *t) {
    float a = modulStranica(t->t2,t->t3);
    float b = modulStranica(t->t1,t->t3);
    float c = modulStranica(t->t1,t->t2);
    return a + b + c;
}

void unesiTocke(Tocka *t, int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%f%f%f", &t[i].x, &t[i].y, &t[i].z);
    }
    return;
}

void unesiTrokute(Trokut *tr, Tocka *to, int n) {
    int i,a,b,c;
    for (i = 0; i < n; i++) {
        scanf("%d%d%d", &a, &b, &c);
        tr[i].t1 = &to[a];
        tr[i].t2 = &to[b];
        tr[i].t3 = &to[c];
    }
    return;
}
float pronadjiNajveciOpseg(Trokut t[], int n) {
    float max = opseg(&t[0]);
    int i;
    for (i = 0; i < n; i++) {
        if (max < opseg(&t[i])) {
            max = opseg(&t[i]);
        }
    }
    return max;
}

