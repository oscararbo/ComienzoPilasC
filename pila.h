//
// Created by frsela on 9/24/26.
//

#ifndef INC_20260924_PILAS_PILA_H
#define INC_20260924_PILAS_PILA_H

#define MAX_PILA 20

typedef struct {
    char pila[MAX_PILA];
    int tope;
} Pila;

Pila* constructorPila();
void destruirPila(Pila *p);
void pushPila(Pila *this, char c);
char popPila(Pila *this);

#endif //INC_20260924_PILAS_PILA_H
