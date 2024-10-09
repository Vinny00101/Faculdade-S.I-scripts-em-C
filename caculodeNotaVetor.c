#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    float notas[4];
    float media = 0, soma = 0;
    for (int i = 0; i <= 3; i++)
    {
        float valor;
        scanf("%f", &valor);
        notas[i] = valor;
        soma = soma + notas[i];
        
    }
    media = soma/4;
    printf("%f",media);
    getch();
    return(0);
}