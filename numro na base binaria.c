#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Quest�o 03: Fazer uma fun��o recursiva que,
dado um n�mero inteiro N, exiba o mesmo na
base 2 (bin�ria).
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

