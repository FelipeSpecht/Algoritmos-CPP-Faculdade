#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ajustaTexto(char *txtIN){

    int tamanho = strlen(txtIN);
    char temp[tamanho];
    strcpy(temp, txtIN);

    int i;

    if(temp[0] > 96){
        temp[0] = temp[0] - 32;
    }

    for(i = 1; i < tamanho; i++){
        if(temp[i] < 97){
            temp[i] = temp[i] + 32;
        }
    }

    strcpy(txtIN, temp);
}


void main()
{

    char *texto = (char*)malloc(sizeof(char) * 1024);
    printf("\nDigite um texto: ");
    gets(texto);


    int tamanho = strlen(texto);
    char *str = (char*)malloc(sizeof(char) * tamanho);
    strncpy(str, texto, tamanho);
    free(texto);

    ajustaTexto(str);
    printf("\n%s", str);

}
