#include <stdio.h>

int main() {

    char operador;
    double primerNumero, segundoNumero;

    printf("Escoge un operador ( +, -, *, /) : ");
    scanf("%c", &operador);

    printf("Ingrese los numeros a calcular: ");
    scanf("%lf %lf", &primerNumero, &segundoNumero);

    switch(operador) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", primerNumero, segundoNumero, primerNumero + segundoNumero);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", primerNumero, segundoNumero, primerNumero - segundoNumero);
            break;
        case '*':
            printf("%.1lf - %.1lf = %.1lf\n", primerNumero, segundoNumero, primerNumero * segundoNumero);
            break;
        case '/':
            printf("%.1lf - %.1lf = %.1lf\n", primerNumero, segundoNumero, primerNumero / segundoNumero);
            break;
        default: 
            printf("Por favor escoge un operador valido.");
    }
}