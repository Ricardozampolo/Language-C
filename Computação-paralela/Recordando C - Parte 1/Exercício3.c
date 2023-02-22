//3. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo (no exemplo, 9). Este número deve ser sempre ímpar.
//
//1 2 3 4 5 6 7 8 9
//   2 3 4 5 6 7 8
//      3 4 5 6 7
//         4 5 6
//            5  

#include <stdio.h>

int main(){
	
	int tam, i, j;
	printf("Digite um numero impar: \n");
	do {
		scanf("%d", &tam);
		if(tam % 2 == 0){
			printf("Numero invalido. Digite novamente!\n");
		}
		else{
			printf("Numero valido!\n\n");
		}	
	} while(tam%2==0);

	for(i = 1;i <= tam; i++){
		printf("%d ", i);
		for(j = i + 1;j <= tam; j++)
			printf("%d ", j);
			tam-=1;
			printf("\n");
		
	}

return 0;
}
