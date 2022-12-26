#include <stdio.h>

int main(void)
{
    printf("%.12f\n", 6.0 / 7); // Mayor precision, con que solo un operador sea float basta para dividir
    printf("%.2f\n", 6.0 / 7.0); // Menor precision

    return 0;
}

/*
    1. Para dividir hay que colocar el indicar "float" y los numeros a dividir asi sean mostrados como enteros, hay que definir
        su parte decimal (6.0, 7.0, 1.0), de otra manera la division solo la muestra en su parte entera es decir "0.0000",
        para añadir mas digitos decimales al resultado solo se coloca el numero de decimales que se quieren mostrar y anterior a 
        este se define con un punto junto al indicador, es decir "%.9f\n", mientras mas decimales se añadan pues mas preciso sera 
        el calculo matematico, en cambio si se añaden pocos decimales pues se redondea de manera positiva al siguiente entero mas 
        cercano.
    2. Para el manejo de operadores logicos como "mayor que >" o "menor que <" el sistema devuelve "1" para TRUE y "0" para FALSE.
    3. Hay un total de 9 operadores logicos en C los cuales son: 
        < "Menor que", 
        > "Mayor que", 
        <= "Menor o igual que", 
        >= "Mayor o igual o que", 
        != "Diferente de", 
        ! "Negacion u opuesto al valor", 
        && "And",
        || "Or", 
        == "Operador para igualdar dos sentencias".
*/