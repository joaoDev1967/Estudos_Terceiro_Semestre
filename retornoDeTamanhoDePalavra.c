#include<stdio.h>
#include<string.h>

char palavra[100];

int contadorDeCaracteres(char palavra[100]){
    return strlen(palavra);
}

int main(){
    printf("Escreva uma palavra: ");
    scanf("%s",palavra);
    printf("\n\n\nTamanho da palavra: %d",contadorDeCaracteres(palavra));
    return 0;
}