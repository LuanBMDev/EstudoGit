#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int numero = 0;

    printf("Ola mundo!\n");

    if (5>2)
    {
        printf("Essa condicao e um teste, apenas isso");
    }
    
    while (numero < 5)
    {
        printf("%d\n", numero++);
    }

    system("pause");
    return 0;
}