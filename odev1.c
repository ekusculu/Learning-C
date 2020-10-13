#include<stdio.h>
#include<ctype.h>

int main()
{
	char x;
	printf("Bir harf girin: \n");
	scanf("%c", &x);

		if(isalpha(x))
		{
		
			if (islower(x))
			{
				printf("Girdiginiz harfin alfabedeki sirasi: %d", (x - 96));
				return 1;
			}
			else
			{
				printf("Girdiginiz harfin alfabedeki sirasi: %d", (x - 64));
				return 0;
			}
		}
}
