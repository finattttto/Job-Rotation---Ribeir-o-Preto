includePath <stdio.h>

int main (void)
{
    int indice=13, soma=0, k=0;

    do
    {
        k = k + 1;
        soma = soma + k;

    }while(k<indice);

    printf("Soma = %d\n", soma);

    return 0;
}
