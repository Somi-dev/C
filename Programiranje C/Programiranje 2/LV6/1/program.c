/* Ovu datoteku ne mijenjate */

#include <stdio.h>
#include "myheader.h"



int main(void)
{
  int n, m;
  Tocka tocke[100];
  Trokut trokuti[100];
  float opseg;

  printf("Upisi broj tocaka koje zelis unijeti: ");
  scanf("%d", &n);

  printf("Upisi broj trokuta koje zelis unijeti: ");
  scanf("%d", &m);

  unesiTocke(tocke, n);
  unesiTrokute(trokuti, tocke, m);

  opseg = pronadjiNajveciOpseg(trokuti, m);

  printf("REZULTATI:\n");
  printf("%.2f", opseg);

	return 0;
}