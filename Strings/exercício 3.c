#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[20], sexo[10], nacionalidade[20], brasileiroMaisLeve[20], pessoaMaisPesada[20];
    float peso = 0, somaDosPesos = 0, médiaDosPesos, maiorPeso = 0, menorPeso = 200;
    int contador = 1;

    while (strcmp(nome,"SAIR") != 0)
    {
        printf ("\nInsira o nome: ");
        scanf (" %s", nome);
        printf ("Insira o sexo: ");
        scanf (" %s", sexo);
        printf ("Insira o peso: ");
        scanf ("%f", &peso);
        printf ("Insira a nacionalidade: ");
        scanf (" %s", nacionalidade);

        somaDosPesos = somaDosPesos + peso;
 
        if (maiorPeso <= peso)
        {
            maiorPeso = peso;
            strcpy (pessoaMaisPesada, nome);
        }

        if (strcmp(sexo, "feminino") == 0)
        {
        if (strcmp(nacionalidade, "brasileira") == 0)
        {
            if (menorPeso > peso)
            {
                menorPeso= peso;
                strcpy (brasileiroMaisLeve, nome);
            }
        }
        }
        contador++;    
    }
    médiaDosPesos = somaDosPesos/(contador-1);
    
    printf ("\n\nMédia do peso dessas pessoas: %f", médiaDosPesos);
    printf ("\nNome da  pessoa mais pesada: %s", pessoaMaisPesada);
    printf ("\nNome da mulher brasileira mais leve: %s", brasileiroMaisLeve);
    printf ("\n\n\n");

    return 0;
}