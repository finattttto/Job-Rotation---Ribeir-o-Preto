#include <stdio.h>

int main(void)
{
    int num, i=0, j=1, k, l=0;

    printf("Informe o numero que deseja comparar com a sequincia Fibonacci: ");
    scanf("%d", &num);

    do
    {
        if(j == num)
        {
            l=1;
        }

        k = j;
        j = i + k;
        i = k;


    }while(i<=num);

    if(l==1)
    {
         printf("\n%d faz parte da sequencia Fibonacci.\n", num);
    }
    else
    {
         printf("\n%d nao faz parte da sequencia Fibonacci.\n", num);
    }

    return 0;
}
