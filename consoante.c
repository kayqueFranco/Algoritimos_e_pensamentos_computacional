#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    char letra;
    int i;
    int cont = 0;

    printf("Digite uma palavra de no maximo 10 caracteres: ");
    scanf("%99s", palavra);

    while (strlen(palavra) > 10) {
        printf("A palavra passou de 10 caracteres!\n");
        printf("Digite novamente: ");
        scanf("%99s", palavra);
    }

    printf("\nConsoantes: ");

    for (i = 0; palavra[i] != '\0'; i++) {

        letra = tolower(palavra[i]);

        if (letra != 'a' &&
            letra != 'e' &&
            letra != 'i' &&
            letra != 'o' &&
            letra != 'u') {

            printf("%c ", palavra[i]);
            cont++;
        }
    }

    printf("\nQuantidade de consoantes: %d\n", cont);

    return 0;
}
