/*Multiplication bit-wise*/
#include<stdio.h>
#include<conio.h>

void MULTI(int a, int b) ;
int main()
{
	int a, b ;
	printf("Enter two numbers: ") ;
	scanf("%d%d",&a,&b) ;
	MULTI(a,b) ;
	return 0 ;
}
void MULTI(int a, int b)
{
	int x, i, PRO = 0, STEP = 0 ;
	x= b; i = 0 ;
	while(x>0)
	{
		STEP = a<<i ;
		if(x&1) PRO = PRO + STEP;
		i++ ;
		x= x>>1 ;
		#ifdef TEST 
		printf("%d  %d\n", x, STEP) ;
		#endif
	}
	printf("\n Product = %d",PRO);
}
