# include <stdio.h>
# include <string.h>

int main ()
{
    char nome [15], nomeDaPessoaMaisAlta [15];
    float altura, menorAltura = 15, mediaDasAlturas, somaDasAlturas = 0, maiorAltura = 0;
    int contador;

    for (contador = 1; contador <= 20; contador ++)
    {
        printf ("\nInsira seu nome: ");
        scanf (" %s", nome);
        printf ("Insira sua altura: ");
        scanf ("%f", &altura);

        somaDasAlturas = somaDasAlturas + altura;

        if (altura < menorAltura)
        {
            menorAltura = altura;
        }
        if (altura > maiorAltura)
        {
            strcpy (nomeDaPessoaMaisAlta, nome);
        }
    }

    mediaDasAlturas = somaDasAlturas/20;

    printf ("\nMédia das alturas: %.2f", mediaDasAlturas);
    printf ("\nMenor altura: %.2f", menorAltura);
    printf ("\nPessoa mais alta: %s\n\n", nomeDaPessoaMaisAlta);
    return 0;
}