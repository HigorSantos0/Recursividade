#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Quest�o 04: Pede-se a implementa��o de uma
fun��o recursiva que exiba os n primeiros
termos de uma PG (Progress�o Geom�trica),
onde a1 � o seu primeiro termo e q a raz�o.
Observa��o: uma PG consiste em uma
sequ�ncia de valores, iniciadas pelo valor a1. Os
demais elementos s�o definidos como o
anterior multiplicado pela raz�o.
*/

void recursivaPg(int a1, int r, int n);

void main ()
{
	int a1 = 2, r = 3, n = 5;
	
	recursivaPg(a1, r, n);
}
void recursivaPg(int a1, int r, int n)
{
	if(n != 0)
	{
		printf("%d ", a1);
		
		recursivaPg(a1*r, r, n-1);
	}
}
