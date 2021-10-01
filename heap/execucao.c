#include <stdio.h>
#include <string.h>
#include <windows.h>
#include "dados.h"

int main(){

    LARGE_INTEGER freq;
    LARGE_INTEGER t1, t2;
    double tempo;

    heap_inicia();

    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&t1);

    lerArquivo();

    QueryPerformanceCounter(&t2);
    tempo = (t2.QuadPart-t1.QuadPart)*1000.0/ freq.QuadPart;

    printf("Tempo de execucao = %lf\n", tempo);

    mostra_heap();
    
    heap_retira();
    
    mostra_heap();

	return 0;
}
