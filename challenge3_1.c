#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int qtdEsc = 0;
    printf("Digite quantos Pets deseja analisar: ");
    scanf("%d",&qtdEsc);
    printf("\n");

// Alocação dinâmica do Vetor/Array, Ponteiro e Criação da Struct
 struct Pets {
    int idade;
    float peso;
};
struct Pets *pet, *vet;
pet = malloc(qtdEsc *sizeof(struct Pets));
vet = pet;

//Preenchendo o vetor com valores dafaults
for(int i=0; i < qtdEsc; i++) {
    pet[i].idade = 0;
    pet[i].peso = 0.0;
}

//Set Pointer
pet = vet;

//Inserção de Pets ao Vetor
if(qtdEsc > 0){

  for(int i = 0; i < qtdEsc ; i++) {

      printf(" Digite a idade do Pet %d :", i + 1);
      scanf("%d", &pet[i].idade);
      printf(" Digite o peso do Pet %d :", i + 1);
      scanf("%f", &pet[i].peso);
      printf("\n");
      
  }
}

//Set Pointer
pet = vet;

int idadeTotal = 0;
float pesoTotal, mediaI, mediaP;

//Realiza a soma das idades e pesos fornecidos pelo usuário 
for(int i = 0; i < qtdEsc; i++, pet++){
    idadeTotal += pet->idade;
    pesoTotal += pet->peso;
  }


  //Apresenta a soma das idades e pesos
  if(qtdEsc > 0 ){
  printf(" A idade total dos Pets é: %d\n", idadeTotal);
  printf(" O peso total dos Pets é:  %f\n", pesoTotal);
  printf("\n");

  //Cálculo básico da Média
  mediaI = idadeTotal / qtdEsc ;
  mediaP = pesoTotal / qtdEsc ; 

   printf("A média de idade é %f: ", mediaI);
   printf("\n");
   printf("A média de peso é %f: ", mediaP);

  }
}