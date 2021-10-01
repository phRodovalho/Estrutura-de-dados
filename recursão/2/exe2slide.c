#include <stdio.h>

int fat(int n){
	if(n == 1)
	return 1;
	else return fat(n-1)*n;
}


int main(){
	int n;
	
	printf("Digite N para calcular fatorial N!\n");
	scanf("%d", &n);
	printf("resultado = %d\n", fat(n));
	
	return 0;
}

