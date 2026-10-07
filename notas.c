#include <stdio.h>

int main() {

    float nota, soma = 0, media;
    int quantidade = 0;

    printf("Digite -1 para calcular a media.\n\n");

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    while (nota != -1) {

        if (nota >= 0 && nota <= 10) {
            soma = soma + nota;
            quantidade++;
        } else {
            printf("Nota invalida! Digite uma nota entre 0 e 10.\n");
        }

        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);
    }

    if (quantidade > 0) {

        media = soma / quantidade;

        printf("\nQuantidade de alunos: %d", quantidade);
        printf("\nMedia das notas: %.2f\n", media);

    } else {
        printf("\nNenhuma nota foi cadastrada.\n");
    }

    return 0;
}
