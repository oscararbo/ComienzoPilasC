#include <stdio.h>
#include "pila.h"

int main(int argc, char *argv[]) {
    printf("Numero argumentos recibidos: %d\n", argc);
    if (argc < 2) {
        printf("Parametros insuficientes, dame la cadena de parentesis\n");
        return 3;
    }

    char *caracter = argv[1];

    Pila *miPila = constructorPila();

    while (*caracter != 0) {
        if (*caracter == '(') {
            pushPila(miPila, *caracter);
        } else if (*caracter == ')') {
            char ultimo = popPila(miPila);
            if (ultimo == '\0' || ultimo != '(') {
                printf("Error en secuencia mas cierres que aperturas\n");
                return 1;
            }
        }
        caracter++;
    }

    char ultimo = popPila(miPila);
    if (ultimo != '\0') {
        printf("Error en secuencia mas aperturas que cierres\n");
        return 2;
    }

    destruirPila(miPila);
    miPila = NULL;

    printf("Secuencia correcta !\n");

    return 0;
}
