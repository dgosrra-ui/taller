#include <stdio.h>
#include "suma.h"   
int main(int argc, char const* argv[])
{
int a, b;
printf("Calculadora En C\n");
printf("Ingrese el primer numero: ");
scanf("%d", &a);
printf("Ingrese el segundo numero: ");
scanf("%d", &b);
printf("La suma es : %d",sumar(a,b));
return 0;    
}