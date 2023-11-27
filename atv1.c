#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vet[5], i, soma = 0, npar = 0, contp, maiorn, menorn, dobrov;
    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        vet[i] = rand() % 51;
        printf("%2d ", vet[i]);
    }
    for (i = 0; i < 5; i++)
    {
        soma = soma + vet[i];
    }
    npar = vet[0];
    for (i = 0; i < 5; i++)
    {
        npar = vet[i] % 2;
        if (npar == 0)
        {
            contp = contp + 1;
        }
    }
    maiorn = vet[0];
    for (i = 0; i < 5; i++)
    {
        if (vet[i] > maiorn)
        {
            maiorn = vet[i];
        }
    }
    menorn = vet[0];
    for (i = 0; i < 5; i++)
    {
        if (menorn > vet[i])
        {
            menorn = vet[i];
        }
    }
    for (i = 0; i < 5; i++)
    {
        dobrov = vet[i] * 2;
        printf("\n");

        printf("Dobro:%d\n", dobrov, i, vet[i]);
    }
    printf("\n\n");
    printf("Soma:%d\n", soma);
    printf("Quantidade Par:%d\n", contp);
    printf("Maior Número:%d\n", maiorn);
    printf("Menor Número:%d\n", menorn);
}