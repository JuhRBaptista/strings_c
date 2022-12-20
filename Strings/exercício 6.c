#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[20];
    int contador = 0;

    printf ("Insira o nome do usuário: ");
    scanf (" %[^\n]s", nome);

    while (contador <= strlen(nome))
    {
        printf ("%c\n", nome[contador]);
        contador++;
    }
    return 0;
}