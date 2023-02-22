// 2. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
// Calcular a média de aproveitamento, usando a fórrmula: MA = (N1 + N2*2 + N3*3 + ME)/7.
// A partir da média, informar o conceito de acordo com a tabela:

#include <stdio.h>
float testaNota(float* a){
    int i = 0;
    
    scanf("%f", a);
    while(i < 1){
        if(*a < 0 || *a > 10){
            printf("O valor da nota e invalido. Digite novamente!\n");
            scanf("%f",a);
        }
        else {
            i++;
        }
    }
}

int main(){
    //Variáveis
    float n1, n2, n3, ME;
    
    printf("Digite o valor da nota N1 de (0 a 10):\n");
    testaNota(&n1);
    
    printf("Digite o valor da nota N2 de (0 a 10):\n");
    testaNota(&n2);
    
    printf("Digite o valor da nota N3 de (0 a 10):\n");
    testaNota(&n3);
    
    printf("Digite o valor da nota ME de (0 a 10):\n");
    testaNota(&ME);
    
    float media = (n1 + n2*2 + n3*3 + ME)/7;
    printf("O valor da media de aproveitamento e: %.2f\n", media);
    
    //Válida Nota
    if(media >= 9){
    	printf("Nota: A");
	}
	
	if(media >= 7.5 && media < 9){
		printf("Nota: B");
	}
	
	if(media >= 6 && media < 7.5){
		printf("Nota: C");
	}
	
	if(media >= 4 && media <6){
		printf("Nota: D");
	}
	
	if(media < 4){
		printf("Nota: E");
	}
}
