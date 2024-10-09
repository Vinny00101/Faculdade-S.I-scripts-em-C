#include <stdio.h>
#include <conio.h>
int main(){
    // entrada de dados.
    int valor, numP, numI, i;
    numP = 0;
    numI = 0;
    // receber do usuario um valor para ser o final do loop.
    scanf("%d",&valor);
    // um simples loop para indentificar quantos impares e pares
    for (i = 1; i <=valor;i++){
        // condicao para ser par: se resto da divisao de i por 2 for 0, instrucao executa!
        if (i % 2 == 0){
            numP += 1;
        }
        // condicao para ser impa: se resto da divisao de i por 2 for diferente de 0, instrucao executa!
        else if (i % 2 != 0){
            numI += 1;
        }
    }
    printf("Impares: %.1d\n",numP);
    printf("Pares: %.1d\n",numI);
    getch();
    return(0);
}