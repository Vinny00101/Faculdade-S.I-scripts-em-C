#include <stdio.h>

int soma(int a, int b, int c, int d){
    int resultado;
    resultado = (a + b + c)/d;
    return resultado;
}
int main(){
    int a, b, c, d, resultadoDaSoma;
    a = 9;
    b = 2;
    c = 7;
    d = 3;
    resultadoDaSoma = soma(a,b,c,d);
        if (resultadoDaSoma >= 7){
            printf("Voce foi aprovado, pois sua media e de %d",resultadoDaSoma);
        }
        else if (resultadoDaSoma >=4){
            printf("voce estar em prova final, pois sua media nao e maior que 7: %d",resultadoDaSoma);
        }
        else if (resultadoDaSoma <4){
            printf("Voce foi reprovado, pois sua media nao e igual a 4 para prova final: %d",resultadoDaSoma);
        }
    return 0;
}