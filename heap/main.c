#include <stdio.h>
#include <string.h>
#include "dados.h"
#define max 10000

Heap heap[max]; //declarando vetor global heap de tamanho max--

//inicia o heap com todas as posições do vetor =-1
void heap_inicia(){
	for(int i = 0; i < max; i++){
		heap[i].nota = -1;
	}
}

//recebe posição i e retorna a posição pai 
int calcula_pai(int i){
  return (i-1)/2;

}

//recebe posição i e rotorna o filho da esquerda
int filhoEsquerda(int i){
  return (2*i)+1;
}

//recebe posição i e retorna o filho da direita
int filhoDireita(int i){
  return (2*i)+2;
}

void heap_retira(){
	if(heap[0].nota == -1){
		printf("Lista vazia\n");
	}else{
		printf("Aluno %s, nota %d retirado do heap\n", heap[0].nome, heap[0].nota); //retira sempre o numero da raiz//

		Heap heap_aux[max]; //crio vetor aux que vai receber o vetor global

		//passo os dados para vetor aux
		for(int i=0; i<max; i++){
			heap_aux[i].nota = heap[i].nota;
			strcpy(heap_aux[i].nome, heap[i].nome);
		}

		heap_inicia(); //limpo o vetor principal

		//passo os dados para serem inseridos novamente no vetor principal
		for(int i=1; i<max; i++){
			heap_insere(heap_aux[i].nota, heap_aux[i].nome);
		}
		printf("Retirado com sucesso\n");
	}
}

void heap_reorganiza(int posic){
	int pai = calcula_pai(posic);

	while(heap[pai].nota < heap[posic].nota){
		//troca nota
		int aux = heap[pai].nota ;
		heap[pai].nota = heap[posic].nota ;
		heap[posic].nota  = aux;
		//troca nome
		char aux_n[20];
		strcpy(aux_n, heap[pai].nome);
		strcpy(heap[pai].nome, heap[posic].nome);
		strcpy(heap[posic].nome, aux_n);

		//calculo o proximo pai
		posic = pai;
		pai = calcula_pai(posic);
	}
}

void heap_insere(int num, char nome[]){
	int i = 0;
	if(heap[0].nota == -1){ //primeiro caso
		heap[0].nota = num;
		strcpy(heap[0].nome, nome);
	}else{
		while(heap[i].nota != -1){ //ando até o final do vetor
			i++;
		}
		heap[i].nota = num;
		strcpy(heap[i].nome, nome);

		heap_reorganiza(i);
	}
}

void mostra_heap(){
	int i=0;
	while(heap[i].nota != -1){ 
        printf("Aluno: %s\n", heap[i].nome);
        printf("Nota: %d\n", heap[i].nota);
        printf("\n");
     i++;
	}
}

void lerArquivo(){

    FILE *op;
    //op = fopen("arqv100.txt", "r");
    //op = fopen("arqv1000.txt", "r");
    op = fopen("arqv10000.txt", "r");

    int nota;
    char nome[100];

    while(fscanf(op, "%d %[^\n]s", &nota, nome) != EOF){
        heap_insere(nota, nome);
    }

	
    fclose(op);
}
