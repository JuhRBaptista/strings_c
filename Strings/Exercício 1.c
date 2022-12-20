# include <stdio.h>
# include <string.h>

int main ()
{
    char nome [15], sexo [10];
    int quantidadeDeHomens = 0, quantidadeDeMulheres = 0, contador;

    for (contador = 1; contador <= 2; contador++)
    {
        printf ("\nInsira seu nome: ");
        scanf (" %s", nome);
        printf ("Insira o sexo: ");
        scanf (" %s", sexo);

        if (strcmp (sexo, "feminino") == 0)
        {
            quantidadeDeMulheres = quantidadeDeMulheres + 1;
        }
        if (strcmp (sexo, "masculino") == 0)
        {
            quantidadeDeHomens = quantidadeDeHomens + 1;
        }
    }
    printf ("\nQuantidade de mulheres: %d", quantidadeDeMulheres);
    printf ("\nQuantidade de homens: %d.\n", quantidadeDeHomens);
    return 0;
}