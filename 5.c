#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, tam=15, cont=0;
    char str1[tam];

    printf("Informe uma palavra: ");
    setbuf(stdin, NULL);
    fgets(str1, 15, stdin);

    for(i=0; i<tam; i++)
    {
        if(str1[i] == '\0')
        {
            break;
        }
        cont++;
    }

    char str2[cont];
    j=cont;
    j--;

    for(i=0; i<cont; i++)
    {
        j--;
        str2[j] = str1[i];
    }
    str2[j] = '\0';

    printf("Inverso da palavra: %s\n", str2);

    return 0;
}
