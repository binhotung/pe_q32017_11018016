#include <stdio.h>


/*programaçao da tail*/
int numdigtl (int num)
{
	if (num==0) return  0 ;
	return num%10+numdigtl(num/10);
}


/*programa que vai fazer com tl*/

int numdig (int n)
{
return numdigtl(n);
}





int main ()
{
	int n;
	scanf("%d",&n);
	printf("a quantidade de digitos:%d\n" ,numdig(n) );
	
	return 0;

}
