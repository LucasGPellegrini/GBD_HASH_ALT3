#include "lista.h"
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct noLista{
    long int info;
    struct noLista* prox;
};

int cria_lista(Lista* lst){
    Lista cab = (Lista)malloc(sizeof(struct noLista));
    if(cab == NULL) return 0;

    cab->info = 0;
    cab->prox = NULL;
    *lst = cab;

    return 1;
}

int tamanho_lista(Lista lst, long int* t){
    if(lst == NULL) return 0;
    *t = lst->info;
    return 1;
}

int lista_vazia(Lista lst){
    if(lst == NULL) return 0;
    return(lst->prox == NULL);
}

int insere_elem(Lista lst, long int v){
    if(lst == NULL || v <= 0) return 0;

    Lista no = (Lista)malloc(sizeof(struct noLista));
    if(no == NULL) return 0;

    no->info = v;
    
    for(lst->info++; lst->prox != NULL && lst->prox->info < v; lst = lst->prox);

    if(lst->prox != NULL && lst->prox->info == v){
        free(no);
        return 1;
    }

    no->prox = lst->prox;
    lst->prox = no;
    return 1;
}

int pertence(Lista lst, long int v){
    for(lst = lst->prox; lst != NULL && lst->info != v; lst = lst->prox);
    return (lst != NULL);
}

int imprimir_lista(Lista lst, FILE* fp){
    if(lst == NULL) return 0;
    setlocale(LC_ALL, "Portuguese_Brasil");
    for(Lista aux = lst->prox; aux != NULL; aux = aux->prox)
        if(aux->prox == NULL) fprintf(fp, "%ld\n", aux->info);
        else fprintf(fp, "%d, ", aux->info);
    return 1;
}

int apaga_lista(Lista* lst){
    if(lst == NULL) return 0;
    
    Lista aux;
    while(*lst != NULL){
        aux = *lst;
        *lst = aux->prox;
        free(aux);
    }
    return 1;
}