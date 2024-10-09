#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;
    char continuar;

    do {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        
        printf("Escolha a operação (+, -, *, /): ");
        scanf(" %c", &operacao);

        switch (operacao) {
            case '+':
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case '-':
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case '*':
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case '/':
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: Divisão por zero.\n");
                }
                break;
            default:
                printf("Operação inválida.\n");
        }

        printf("Deseja realizar outra operação? (s/n): ");
        scanf(" %c", &continuar);
        
    } while (continuar == 's');

    return 0;
}
