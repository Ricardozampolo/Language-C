//Exercício 1

// 1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. 
// Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.

#include <stdio.h>

int main(){
    
    int matriz[9][9] = {{11,12,13,14,15,16,17,18,19},
                        {21,22,23,24,25,26,27,28,29},
                        {31,32,33,34,35,36,37,38,39},
                        {41,42,43,44,45,46,47,48,49},
                        {51,52,53,54,55,56,57,58,59},
                        {61,62,63,64,65,66,67,68,69},
                        {71,72,73,74,75,76,77,78,79},
                        {81,82,83,84,85,86,87,88,89},
                        {91,92,93,94,95,96,97,98,99}};
                    
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0;j < 9; j++)
        {
            printf("%d ", matriz[i][j]);     
        }
        printf("\n");
    }
}