#include <stdio.h>
#include <stdlib.h>
#define imePrezime 50

typedef struct student {
   int id;
   char *ime;
   char *prezime;
   float prosjek;
   struct student *next;
} STUDENT;

void unosPodataka(STUDENT *p) {
   printf("Unesite ID: ");
   scanf("%d%*c", &p->id);
   p->ime = (char *)calloc(1, sizeof(imePrezime));
   printf("Unesite ime: ");
   scanf("%[^\n]s", p->ime);
   getchar();
   p->prezime = (char *)calloc(1, sizeof(imePrezime));
   printf("Unesite prezime: ");
   scanf("%[^\n]s", p->prezime);
   printf("Unesite prosjek: ");
   scanf("%f", &p->prosjek);
   getchar();
}

float prosjekSvihStudenata(STUDENT *p) {
   float suma = 0;
   int i = 0;
   while (p) {
      suma += p->prosjek;
      i++;
      p = p->next;
   }
   return suma / i;
}

STUDENT *kreirajListu(void) {
   STUDENT *headNode = (STUDENT *)calloc(1, sizeof(STUDENT));

   if (headNode == NULL) {
      perror("Kreiranje");
      return NULL;
   }
   unosPodataka(headNode);
   headNode->next = NULL;
   return headNode;
}

STUDENT *novaLista(STUDENT *p) {
   STUDENT *newHeadNode = (STUDENT *)calloc(1, sizeof(STUDENT));

   if (newHeadNode == NULL) {
      perror("Kreiranje");
      return p;
   }
   unosPodataka(newHeadNode);
   newHeadNode->next = p;
   return newHeadNode;
}

STUDENT *pronadiID(STUDENT *p, int kljuc) {
   while (p) {
      if (p->id == kljuc) {
         return p;
      } else {
         p = p->next;
      }
   }
   return NULL;
}

void ispisivanjeListe(STUDENT *traverseNode) {
   STUDENT *temp = traverseNode;

   while (traverseNode) {
      printf("ID: %d - %s %s, prosjek: %.2f\n", traverseNode->id, traverseNode->ime, traverseNode->prezime, traverseNode->prosjek);
      traverseNode = traverseNode->next;
   }
   printf("Ukupan prosjek svih studenata je %.2f", prosjekSvihStudenata(temp));
}

void obrisiCvor(STUDENT **headNode, STUDENT *targetNode) {
   if (*headNode == targetNode) {
      *headNode = (*headNode)->next;
      free(targetNode);
      printf("Osloboden cvor: %p\n", targetNode);
   } else {
      STUDENT *traverseNode = *headNode;

      while (traverseNode->next) {
         if (traverseNode->next == targetNode) {
            traverseNode->next = targetNode->next;
            free(targetNode);
            printf("\nOsloboden cvor: %p\n", targetNode);
            break;
         }
         traverseNode = traverseNode->next;
      }
   }
}

STUDENT *obrisiPopis(STUDENT *traverseNode) {
   STUDENT *obrisiCvor = NULL;

   while (traverseNode) {
      obrisiCvor = traverseNode;
      traverseNode = traverseNode->next;
      free(obrisiCvor);
      printf("\nOsloboden cvor: %p\n", obrisiCvor);
   }
   return NULL;
}

int main(void) {
   int n;

   printf("Koliko studenata zelite unijeti: ");
   scanf("%d%*c", &n);
   STUDENT *headNode = kreirajListu();
   for (int i = 1; i < n; i++) {
      headNode = novaLista(headNode);
   }
   ispisivanjeListe(headNode);
   STUDENT *odredenCvor = pronadiID(headNode, 2);
   obrisiCvor(&headNode, odredenCvor);
   ispisivanjeListe(headNode);

   return 0;
}