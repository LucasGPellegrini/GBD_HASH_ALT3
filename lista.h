#define SUCESSO 0;
#define FALHA -1;
#define PONTEIRO_INVALIDO -2;
#define SEM_MEMORIA -3;

typedef struct no_lista No_lista;

struct lista{
  int nro_elementos;
  No_lista * cabeca;
};

struct no_lista{
  long int elemento;
  No_lista * proximo;
};

typedef struct lista Lista;

Lista * criar_lista();
int tamanho_lista(Lista * lista);
int existe_elemento(Lista * lista, long int  elemento);
int encontrar_elemento(Lista * lista, int posicao, long int * elemento);
int encontrar_posicao(Lista * lista, int * posicao, long int elemento);
int inserir_lista(Lista * lista, int posicao, long int elemento);
int atualizar_lista(Lista * lista, int posicao, long int elemento);
int remover_lista(Lista * lista, int posicao);
int imprimir_lista(Lista * lista);
int esvaziar_lista(Lista * lista);
int destruir_lista(Lista * lista);
