#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>

typedef struct noLista* Lista;

int cria_lista(Lista*);
int lista_vazia(Lista);
int tamanho_lista(Lista, long int*);
int insere_elem(Lista, long int);
int pertence(Lista, long int);
int imprimir_lista(Lista, FILE*);
int apaga_lista(Lista*);

#endif