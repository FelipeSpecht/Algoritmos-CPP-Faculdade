#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //seta variaveis
    int i, tam;

    //requisita input do usuario
    printf("Digite um valor de N: ");
    scanf("%d", &tam);

    //aloca memoria para a array
    int *val = (int*)malloc(sizeof(int) * tam);

    //corre pela array e adiciona valores
    for(i = 1; i < tam+1; i++)
    {
        *(val + i) = i*10;
        //printa valores na tela
        printf("Valor[%d] = %d\n", i, *(val + i));
    }
    //limpa memoria
    free(val);
    return 0;
}
