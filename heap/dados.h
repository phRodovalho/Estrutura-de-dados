
//Definição da struct
struct HEAP{
	char nome[100];
	int nota;
};

typedef struct HEAP Heap;

//Função que inicializa a prioridade da struct
void heap_inicia();

//Função para calcular qual nó é o pair
int calcula_pai(int i);

//Função para calcular qual é o nó que é o filho a esquerda
int filhoEsquerda(int i);

//Função para calcular qual é o nó que é o filho a direita
int filhoDireita(int i);

//Le arquivos
void lerArquivo();

//Função que organiza em max heap
void heap_reorganiza(int posic);

//Função de inserir elementos na heap
void heap_insere(int num, char nome[]);

//Função para mostrar os elementos no heap
void mostra_heap();

//Função para retirar um elemento no heap
void heap_retira();

//Função para ler arquivos
void lerArquivo();

