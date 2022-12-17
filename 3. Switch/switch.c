#include <stdio.h>

int main(void)
{
    int x = 20;
    switch (x) {
    case 0:
        printf("Caso 0\n");
        break;
    case 1:
        printf("Caso 2\n");
        break;
    case 2:
        printf("Caso 3\n");
        break;
    case 3: case 4:
        printf("Caso 3 y Caso 4 estan combinados");
        break;
    case 5: {
        int y;
        y = 9;
        printf("Numero %d\n", y);
        break;
        }
    default:
        printf("Caso por defecto\n");
        break;
    }

    return 0;
}

/*
    1. Para declarar variables dentro de un "switch" se deben abrir llaves despues de declarar el caso en que se quiere entrar.
    2. Es posible combinar casos como se muestra en la sintaxis de los casos 3 y 4.
*/