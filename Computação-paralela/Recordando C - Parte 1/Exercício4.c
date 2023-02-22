//4. Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética. Faça isto com string de C e de C++.
 
 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 
int main (){
    char nome1[100], nome2[100];
    printf("Informe o primeiro nome: ");
    gets(nome1);
    printf("Informe o segundo nome: ");
    gets(nome2);
    char ordem();
    ordem(nome1, nome2);

 }
char ordem(char a[100], char b[100]){
    int tam=0,i=0,j=0, cont1=0, cont2=0, z=0;
    tam=strlen(a);
    for(i=0;i<tam;i++){
        j++;
    	if(a[j]>b[j]){
        	cont1++;
    	}
    	if(a[j]<b[j]){
        	cont2++;
    	}
	}
	
    if(cont1>cont2)
        printf("A ordem alfabetica e:\n%s.\n%s.\n", b, a);
    else
        printf("A ordem alfabetica e:\n%s.\n%s.\n", a, b);

    printf("\n\n");
}
