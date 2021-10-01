#include <stdio.h>

void tree(int n){
	int i;
	if(n == 1)
		printf(" * \n");
	else {
		tree(n-1);
		for(i = 1; i <= n; i++){
		printf(" * ");
		}
		printf("\n");
	}
	
}



void arv(int n){
	for(int i = 1; i <= n; i++){
		printf("\n");
		
		//for(int space = )
		
		
		for(int j = 1; j <= i; j++){
			printf(" * ");
		}
		
	}
	
	
}


void ar() {
    int l, c;
    for (l=1; l<10; l++) {
        for(c=0; c<=7+l; c++)
            printf(c<9-l?" ":"*");
        printf("\n");
    }
}


int main(){
	int n;
	
	printf("Digite N para altura da arvore\n");
	scanf("%d", &n);
	tree(n);
	//arv(n);
	//printf("resultado = %d\n", tree(n));
	
	return 0;
}


