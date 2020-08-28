#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int rgm[3] = {4, 3, 9}, *pa, *pb, *matrizA, *matrizB ;

  //Alocação Dinâmica; Ponteiro MatrizA e MatrizB
  pa = malloc(3 * sizeof(int));
  matrizA = pa;
  pb = malloc(3 * sizeof(int));
  matrizB = pb;


  //Preenchendo as Matrizes/Vetores
  for (int i = 0; i < 3; i++, pa++, pb++ )
  {
    *pa = rgm[i];
    *pb = rgm[i];
  }
  pa = matrizA;
  pb = matrizB;


  // Impressão da MatrizA
  printf("matriz A: ");
  printf("\n");
  for(int i = 0; i < 3; i++, pa++)
  {
  printf("[%d]\n", *pa);
  }
  printf("\n");


  //Impressão da MatrizB
  printf("Matriz B: ");
  for(int i =0; i < 3; i++, pb++)
  {
    printf("[%d]", *pb);
  }
  pa = matrizA;
  pb = matrizB;


  //Alocação Dinâmica / Ponteiro Matriz M / Matriz Bidimensional 3x3
   int **matrizM;
  matrizM = malloc(9 * sizeof(int *));
  for(int i = 0; i < 9; i++){
    matrizM[i] = malloc(9 * sizeof(int));
  }
  printf("\n");

  
  //Prenchendo a MatrizM = Produto de MatrizA & MatrizB
  printf("Matriz M: \n");
  for(int i = 0; i < 3; i++, pa++) {
    for(int j = 0; j < 3; j++, pb++){
      **matrizM = *pa * *pb;
      printf("[%d]", **matrizM);
    }
    printf("\n");
    pb = matrizB;
  } 
} 
