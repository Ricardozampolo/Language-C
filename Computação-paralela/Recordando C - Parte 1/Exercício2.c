// 2. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
// Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7.
// A partir da média, informar o conceito de acordo com a tabela:

#include <stdio.h>
void testaNota(int a){
    int i = 0;
    
    scanf("%d", &a);
    while(i < 1){
        if(a < 0 || a > 10){
            printf("O valor da nota é inválido. Digite novamente!\n");
            scanf("%d",&a);
        }
        else {
            i++;
        }
    }
}

int main(){
    //Variáveis
    int n1, n2, n3, ME;
    
    printf("Digite o valor da nota N1 de (0 a 10):\n");
    testaNota(n1);
    printf("Digite o valor da nota N2 de (0 a 10):\n");
    testaNota(n2);
    printf("Digite o valor da nota N3 de (0 a 10):\n");
    testaNota(n3);
    printf("Digite o valor da nota ME de (0 a 10):\n");
    testaNota(ME);
    
    int media = (n1 + n2*2 + n3*3 + ME)/7;
    printf("O valor da média de aproveitamento é: %d\n", media);
}
