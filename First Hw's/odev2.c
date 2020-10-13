#include <stdio.h>

int main(void)

{
	int a=0;
	printf("Enter an integer: ");
	scanf("%d", &a);
	
	int i=0;
	int sum=0;
	int b=1;
	int product=1;
	for(i=0; i<a; i++)
	{
		sum += b;
		product = product*b;
		b++;
	}
	printf("sum is %d\n", sum);
	printf("product is %d", product);	
}
