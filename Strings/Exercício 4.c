#include <stdio.h>
#include <string.h>

int main ()
{
    char palavra1[50], palavra2[50], menorPalavra[50];

    printf ("Insira a primeira palavra: ");
    scanf (" %s", palavra1);
    printf ("Insira a segunda palavra: ");
    scanf (" %s", palavra2);

    if (strcmp (palavra1, palavra2) < 0)
    { 
        strcpy (menorPalavra, palavra1);
    }
    else
    {
        strcpy (menorPalavra, palavra2);
    }

    printf ("\nA menor palavra digitada foi %s.\n\n\n", menorPalavra);

    return 0;    
}