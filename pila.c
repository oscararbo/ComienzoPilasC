//
// Created by frsela on 9/24/26.
//

#include "pila.h"

#include <stdlib.h>

Pila *constructorPila() {
    Pila *p = malloc(sizeof(Pila));
    p->tope = 0;
    return p;
}

void destruirPila(Pila *p) {
    free(p);
}

void pushPila(Pila *p, char c) {
    // TODO: Comprobar que no esté llena

    p->pila[p->tope++] = c;
}

char popPila(Pila *p) {
    if (p->tope == 0) {
        return '\0';
    }
    return p->pila[--p->tope];
}