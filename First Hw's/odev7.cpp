#include <stdio.h>
#include <math.h>

int main( )
{
	int n;
	printf("Lütfen bir n sayýsý giriniz: ");
	scanf("%d",&n);
	double toplam = 0;
	double factorial = 1;
	double us = 1;
	
	
	for (int i = 1; i <= n ; i++)
	{
		double sayi = i;
		
		factorial = factorial * sayi;
		us = sayi * sayi;
		toplam = (factorial / us) * pow((-1),sayi+1) ;
		
		printf("%f ",toplam);
		
	}
	
	
	return 0;
}
