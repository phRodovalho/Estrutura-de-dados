#include <stdio.h>

int soma(int n){
	if(n == 1)
	return 1;
	else return soma(n-1)+n;
}


int main(){
	int n;
	
	printf("Digite N para calcular a soma de 1 a N\n");
	scanf("%d", &n);
	printf("resultado = %d\n", soma(n));
	
	return 0;
}

