#include <stdio.h>



/*programa recursivo*/
unsigned int numdig (unsigned int n)
{
	if (n<10) return 1; 
	return 1 + numdig(n/10);
	
}

int main ()
{
	unsigned int n;
	scanf("%d", &n);
	printf("a soma de dígitos é: %d\n",numdig(n));

	return 0;
}
