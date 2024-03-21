#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ajustaTexto(char *txtIN){

    int tamanho = strlen(txtIN);
    int i;

    if(txtIN[0] > 96){
        txtIN[0] = txtIN[0] - 32;
    }

    for(i = 1; i < tamanho-1; i++){
        if(txtIN[i] < 97 && txtIN[i] != 32){
            txtIN[i] = txtIN[i] + 32;
        }
    }

    return txtIN;
}


void main()
{

    char *texto = (char*)malloc(sizeof(char) * 1024);
    printf("\nDigite um texto: ");
    gets(texto);

    ajustaTexto(texto);
    printf("\nTexto ajustado: %s\n", texto);
    free(texto);
}
