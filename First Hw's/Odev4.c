#include <stdio.h>

int main()

{
	int x;
	printf("Lütfen bir x sayýsý giriniz: ");
	scanf("%d",&x);
	int n;
	int min, max;
	
	printf("1. deðeri giriniz: ");
		scanf("%d",&n);
		min = n;
		max = n;
		
	for (int i = 1; i <= x- 1; i ++)
	{
		printf("%d. deðeri giriniz: ",i+1);
		scanf("%d",&n);
		
		
		if (n < min )
		{
			min = n;
			
		}
		else if (n > max )
		{
			
			max = n;
		}	
	}
	printf(" max = %d\n",max);
	printf(" min = %d",min);
	return 0;
	
}
