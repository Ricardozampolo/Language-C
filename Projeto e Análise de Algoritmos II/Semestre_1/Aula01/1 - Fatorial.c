#include <stdio.h>

int fatorial(int n);

int main(){
	
	printf("Exercicio 1 - Fatorial\n\n");
	printf("O valor do fatorial de x e: %d", fatorial(5));

}

int fatorial(int n){
    //Caso base
	if(n == 0){
		return 1;
	}
    //Não caso base 
    else {
		int fat1 = fatorial(n - 1);//Faz as chamadas até chegar no caso base
		int fat2 = n * fat1;//Depois multiplica os valores
		return fat2;//Valor obtido, então é retornado para a chamada 
	}
}
