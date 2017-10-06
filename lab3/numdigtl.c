#include <stdio.h>


/*programaçao da tail*/
int numdigtl (int num, int aux)
{
	if (num<10) return aux+1;
	return numdigtl((num/10),aux+1);
}


/*programa que vai fazer com tl*/

int numdig (int n)
{
return numdigtl(n,0);
}





int main ()
{
	int n;
	scanf("%d",&n);
	printf("a quantidade de digitos:%d\n" ,numdig(n) );
	
	return 0;

}
