#include <stdio.h>
#include <stdlib.h>

void multiplicaValores(int *A){

    int i, tamanho = 10;

    for(i=0; i < tamanho; i++){
        A[i] = (i+1)*2;
    }

}


void main()
{
    int i;
    int tamanho = 10;
    int *valores = (int*)malloc(sizeof(int) * 11);

    for(i=0; i < tamanho; i++){
        *(valores+i) = i+1;
    }

    multiplicaValores(valores);

    for(i=0; i < tamanho; i++){
        printf("[%d] ", *(valores+i));
    }

    free(valores);
}
