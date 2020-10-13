#include<stdio.h>
#include<math.h>

int main()
{
	int i=0;
	int final=0;
	int n=0;

	
	for(i=0; i<8; i++)
	{
		int a;

		do
		{
		printf("enter a number:" );
		scanf("%d", &a);
		printf("\n");
		
		}
		while(a<0);
		
		int b = (a%2);
		int p = pow(10,n);
		final += (b*p);
		n++;
		printf("%d\n", final);
	}
	printf("Binary number %d\n", final);
	
	int j;
	int k = 0;
	int sum = 0;
	int temp = 0;
	
	for(j=0; j<8; j++)
	{
		temp = final;
		final = (final%10)*pow(2,k);
		sum += final;
		temp = temp/10;
		final = temp;
		k++;
		
	}
	printf("\nDecimal number %d", sum);
	
}
