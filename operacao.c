#include <stdio.h>

int main() {

      //declarações 
    int num1, num2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com número 1: ");
    scanf("%d", &num1);
    printf("entre com o número 2: ");
    scanf("%d", &num2);

      // operação de soma
    soma = num1 + num2;

      //operação de subtração
    subtracao = num1 - num2;

      //operação de multiplição
    multiplicacao = num1 * num2;

      //operação de divisão
    divisao = num1 / num2;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

    
}