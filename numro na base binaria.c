#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Questão 03: Fazer uma função recursiva que,
dado um número inteiro N, exiba o mesmo na
base 2 (binária).
*/

void recursivaBinaria(int num);

void main()
{
	int n = 10;
	
	recursivaBinaria(n);
}
void recursivaBinaria(int num)
{
	if(num > 0)
	{
		recursivaBinaria(num/2);
		
		printf("%d ", num%2);
		
	}
}

