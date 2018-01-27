/******************************************************************************

Online C Compiler.Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdarg.h>

int suma(int argumentos, ...)
{
    va_list parametro;
    va_start(parametro, argumentos);      //macro
   
    int suma = 0;
    for(int contador = 0; argumentos > contador; contador++)
        suma += va_arg(parametro, int ); //macro
        
    va_end(parametro);                   //macro
    return suma;
   
}

int main()
{
   printf("Suma = %d\n", suma(4,1,2,3,4));
   printf("Suma2 = %d\n", suma(10,1,1,1,1,1,1,1,1,2,1));
   
    return 0;
}
