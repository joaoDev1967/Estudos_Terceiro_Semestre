#include<stdio.h>
#include<string.h>

char palavra[100];
char vogais[6] = {'a','e','i','o','u'};


int contadorDeVogais(char palavra[100]){
    int numVogais=0;
    for(int i=0; i<strlen(palavra); i++){
        for(int x=0; x<5;x++){
            if(palavra[i]==vogais[x]){
                numVogais++;
            }
        }
    }
    return numVogais;
}

void main(){
    printf("Escreva uma palavra: ");
    scanf("%s",palavra);
    printf("\n\n\nTamanho da palavra: %d",strlen(palavra));
    printf("\nNúmero de vogais:%d",contadorDeVogais(palavra));
    printf("\nNúmero de consoantes:%d",strlen(palavra)-contadorDeVogais(palavra));
}