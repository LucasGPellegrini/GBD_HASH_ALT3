#ifndef INDICE_H_INCLUDED
#define INDICE_H_INCLUDED

#include <limits.h>
#include "registro.h"
#include "lista.h"


// Aqui, o índice contém a chave
// E uma lista com o offset de cada registro no arquivo de dados
struct indice{
	char key[TEXT_SIZE];
	Lista * lista_rids;
};

typedef struct indice* Idc;

#endif
