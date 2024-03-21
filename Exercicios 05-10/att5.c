#include <stdio.h>
#include <stdlib.h>

//define function que retorna array com o menor e o maior numero da array
int * maiorMenor(int *numeros, int tamanho){

    //seta variaveis
    int i;
    //para poder retornar array da func, array precisa ser setada como static
    static int RetornaMaiorEMenor[2];
    //seta ambas as variaveis para o primeiro valor da array
    int maior = *numeros;
    int menor = *numeros;

    //for que corre por toda array
    for(i = 0; i < tamanho; i++){
      //if valor eh maior, adiciona a variavel
      if(maior > *numeros){
        maior = *numeros;
      }

      //if valor eh menor, adiciona a variavel
      if(menor < *numeros){
        menor = *numeros;
      }

      //pula pro prox numero da array
      numeros++;
    }

    //coloca os valores na array
    RetornaMaiorEMenor[0] = maior;
    RetornaMaiorEMenor[1] = menor;

    //retorna array
    return RetornaMaiorEMenor;
}

int main() {
    //seta array com os numeros
    int array[] = { 3, 15, 6, 1, 9, 2, 20, 32, 13, 5};
    //seta ponteiro para array
    int *p = array;
    int i;

    printf("Array = { ");
    //corre por toda array
    for(i = 0; i < sizeof(array)/sizeof(array[0]); i++){
      printf("%d ", *p);
      p++;
    }
    printf("}");

    //seta um ponteiro que recebe o valor recebido da func
    int *recebeMaiorEMenor;
    //seta o tamanho da Array
    int tamanho = sizeof(array)/sizeof(array[0]);
    //passa para o ponteiro
    recebeMaiorEMenor = maiorMenor(array, tamanho);

    //printa os valores recebidos
    printf("\nMaior = {%d}\n", *recebeMaiorEMenor);
    printf("Menor = {%d}\n", *(recebeMaiorEMenor+1));

    return 0;
}
