#include <stdio.h>



/*programa recursivo, que faz somatório*/

unsigned int somtl(unsigned int soma, unsigned int aux)
{
	if(soma<1) return aux;
	return somtl(soma-1, aux+soma);
}

unsigned int soma(unsigned int n)
{
	return somtl(n,0);
}

int main ()
{
	unsigned int n;
	scanf("%d", &n);
	printf("a Somatória é: %d\n",somtl(n,0));

	return 0;
}
