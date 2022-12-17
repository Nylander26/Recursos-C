#include <stdio.h>

int main(void)
{
    int numero = 45;
    double numero2 = 8.02;
    numero = 77;
    float numero3 = 67.67f;
    char caracter = 'Y';
    char texto[11] = "Hola Mundo";

    printf("Esto es numero entero %d\n", numero);
    printf("Esto es un numero flotante de doble precision %lf\n", numero2);
    printf("Esto es un float %f\n", numero3);
    printf("Esto es un caracter %c\n", caracter);
    printf("Esto es un texto %s\n", texto);
}

/*
    1. Para el manejo de numeros enteros se tipea el identificador "int" seguido del nombre de la variable y para imprimirlo
        por consola se debe colocar el "%d", cada identificador de variable tiene su nomenclatura particular.
    
    2. El identificador "double" se refiere a la doble precision de un float, es decir es mas preciso un double que un float,
        por regla general siempre se debe usar double dependiendo del tipo de proyecto ya que un doble almacenada el doble de 
        bites que un float, se muestra por pantalla con la nomenclatura "%lf", que representa "long float", si se busca mostrar
        los numeros de mas esteticos pues se usa la nomenclatura "%g".
    
    3. El identificador "float" maneja los numeros decimales y su nomenclatura varia del "double", siendo esta "%f", donde se
        refiere a "float" es menos preciso que un "double" pero almacena menor cantidad de bites en la memoria.
    
    4. El identificador "char" almacena solo un caracter y la manera de escribirlo en la variable siempre sera con comillas simples
        y su nomenclatura seria "%c", que da como referencia a "character" o "caracter".

    5. Los strings se almacenan con el identificador "char" aunque hay que contar la cantidad de caracteres que se van a almacenar
        dentro de la variable y pasarlos dentro de un array al momento de declarar la funcion (como se ve en el caso superior), 
        siempre se le suma un valor mas al string mostrado ya que implicitamente existe el caracter "\0", cuyo significado es el de 
        decirle al sistema que el string ha llegado a su final y su nomenclatura viene dada por "%s", haciendo referencia a "string".

    6. Se pueden instanciar variables para modificar su valor mas adelante en el codigo a excepcion de los strings.

    7. Existe una variable especial que se denomina "char *" donde su valor es hexadecimal y tiene un espacio en la RAM, en dicha 
        variable se almacenan los strings y son inmutables, se le denominan "punteros" dentro del lenguaje C.
*/