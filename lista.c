#include<stdio.h>
#include<stdlib.h>

struct no{
	int valor;
	struct no *prox;
};

typedef struct no No_Lista;

void initializeList(No_Lista **lista){
	lista = NULL;
}

void insertList(No_Lista **lista, int valor){
	No_Lista *novo = (No_Lista*)malloc(sizeof(No_Lista));
	novo->valor = valor;
	novo->prox = *lista;
	*lista = novo;
	return;
}

void printList(No_Lista **lista){
	No_Lista *aux;
	aux = *lista;
	while(aux != NULL){
		printf("%d ", aux->valor);
		aux = aux->prox;
	}
	printf("\n");
	return;
}

int main(){
	No_Lista *lista;
	initializeList(&lista);
	insertList(&lista, 1);
	insertList(&lista, 2);
	printList(&lista);
	
	return 0;
}
