#include <stdio.h>
#include <string.h>

int main ()
{
    char palavra1[50], palavra2[50];
    int tamanhoDaPalavra1;

    printf ("Insira a primeira palavra: ");
    scanf (" %s", palavra1);
    printf ("Insira a segunda palavra: ");
    scanf (" %s", palavra2);

    printf ("\nA primeira palavra inserida foi %s, com %zu caraacteres.", palavra1, strlen(palavra1));
    printf ("\nA segunda palavra inseria foi %s, com %zu caracteres.", palavra2, strlen(palavra2));

    if (strcmp(palavra1,palavra2) == 0)
    {
        printf ("\nAs palavras inseridas são iguais.");
    }
    else
    {
        printf ("\nAs palavras inseridas são diferentes.");
        if (strlen(palavra1)==strlen(palavra2))
        {
            printf ("\nMas posssuem a mesma quantidade de caracteres.");
        }
        else
        {
            printf ("\nE não possuem a mesma quantidade de caracteres.");
        }
    }
    printf ("\n\n\n");
    return 0;
}