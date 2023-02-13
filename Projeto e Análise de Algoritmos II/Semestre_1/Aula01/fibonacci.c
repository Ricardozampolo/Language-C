/*A sequência [0, 1, 1, 2, 3, 5, 8, 13, 21, ...] é conhecida como sequência ou série de Fibonacci, e tem aplicações teóricas e práticas, 
na medida em que alguns padrões na natureza parecem segui-la.Pode ser obtida através de recorrência*/

#include <stdio.h>
int fibonacci(int n){
    //Caso base
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
        
    else {
        int fib1 = n - 1;
        int fib2 = n - 2;
        return fibonacci(fib1) + fibonacci(fib2);
    }
}

int main()
{
   printf("%d",fibonacci(6));
}