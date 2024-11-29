/* Enunciado:
Crie um programa em C que leia números inteiros do usuário e calcule a soma de todos os números
inseridos. O loop deve continuar até que o usuário insira o número zero, que será o valor sentinela
para encerrar o programa.
• Cenário: Imagine que você está desenvolvendo uma ferramenta simples de cálculo, onde o
usuário deseja somar uma série de números inteiros até decidir que não deseja inserir mais
3
nenhum número. A cada inserção, o programa deve somar os números já inseridos e permitir
que o usuário continue até digitar o número 0 (zero), que encerra o programa e exibe o
resultado final da soma
*/

#include <stdio.h>

int main() {
    int num, soma = 0;

    do {
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
        soma += num;
    } while (num != 0);

    printf("A soma dos números inseridos é: %d\n", soma);

    return 0;
}