#include <stdio.h>
#include <conio.h>
int main(void){
    int valor, resultado, antes, conseq, i;
    antes = 0;
    conseq = 1;
    printf("Digite um valor numerico");
    scanf("%d", &valor);
    for (i = 3; i <= valor; i++){
        resultado = antes + conseq;
        printf("%d ",resultado);
        antes = conseq;
        conseq = resultado;
    }
    getch();
    return(0);
}