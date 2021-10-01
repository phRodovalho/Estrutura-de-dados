#include <stdio.h>

int mdc(int x, int y){
	if(x > y){
		return mdc(x-y,y);
	}else if(x < y){
		return mdc(y,x);
	}else if(x == y){
		return x;
	}
}


int main(){
	int a,b;
	
	printf("Digite dois numeros para calcular o MDC entre eles\n");
	scanf("%d %d", &a, &b);
	printf("resultado = %d\n", mdc(a, b));
	
	return 0;
}


