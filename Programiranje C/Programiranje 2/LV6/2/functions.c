//ovdje pisete implementaciju potrebnih funkcija. 
//ukoliko zelite koristiti dodatne funkcije, njihove deklaracije
//mozete navesti u datoteci zaglavlja. 
//Funkcija unesiPodatkeRacuna je obvezna.

#include <stdio.h>
#include "myheader.h"


void unesiPodatkeRacuna(Racun *r) {
    fgets(r->kupac, 50, stdin);
    fgets(r->prodavac, 50, stdin);
    scanf("%d", &(r->broj_artikala));
    int i;
    float ukupno = 0;
    for (i = 0; i < r->broj_artikala; i++) {
        getchar();
        fgets (r->artikli[i].naziv,50,stdin);
        scanf("%f",&r->artikli[i].cijena);
        scanf("%d",&r->artikli[i].kolicina);
        ukupno += (r->artikli[i].cijena) * (r->artikli[i].kolicina);
    }
    r->ukupan_iznos = ukupno;
    return;
}


/*
Primjer kako bi izgledalo izvodjenje programa, 
prema ovom redosljedu trebate upisivati podatke u strukture.
Ispis racuna se izvodi sam. 

Unesi ime kupca: Petar Kupcevic 
Unesi ime prodavaca: Ivan Prodavacevic
Unesi broj artikala: 4

Unesi ime artikla: Pivo Osjecko 0.5l
Unesi cijenu artikla: 5.99
Unesi kolicinu pojedinog artikla: 120

Unesi ime artikla: Brandy Badel 1l
Unesi cijenu artikla: 69.99
Unesi kolicinu pojedinog artikla: 5
Unesi ime artikla: Vino Crno Ribar 1l
Unesi cijenu artikla: 12.99
Unesi kolicinu pojedinog artikla: 55
Unesi ime artikla: Coca Cola 2l
Unesi cijenu artikla: 12.99
Unesi kolicinu pojedinog artikla: 20

REZULTATI:
Kupac: Petar Kupcevic
Prodavac: Ivan Prodavacevic
-----------------------------
Artikli: 
rb   naziv                    kolicina    cijena    ukupno
1    Pivo Osjecko 0.5l         120        5.99       718.80
2    Brandy Badel 1l           5          69.99      349.95
3    Vino Crno Ribar 1l        55         12.99      714.45
4    Coca Cola 2l              20         12.99      259.80

Ukupan iznos racuna: 2043.00
*/


