
//Defini��o da struct
struct HEAP{
	char nome[100];
	int nota;
};

typedef struct HEAP Heap;

//Fun��o que inicializa a prioridade da struct
void heap_inicia();

//Fun��o para calcular qual n� � o pair
int calcula_pai(int i);

//Fun��o para calcular qual � o n� que � o filho a esquerda
int filhoEsquerda(int i);

//Fun��o para calcular qual � o n� que � o filho a direita
int filhoDireita(int i);

//Le arquivos
void lerArquivo();

//Fun��o que organiza em max heap
void heap_reorganiza(int posic);

//Fun��o de inserir elementos na heap
void heap_insere(int num, char nome[]);

//Fun��o para mostrar os elementos no heap
void mostra_heap();

//Fun��o para retirar um elemento no heap
void heap_retira();

//Fun��o para ler arquivos
void lerArquivo();

