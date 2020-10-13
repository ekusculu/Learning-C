#include <stdio.h>

int main(void)

{
    int a = 0;
    int i=0;
 	printf("Enter the height:\n");
	scanf("%d", &a);


for(i=0; i<a; i++)
{
    int k=0;
    for(k=0; k<=i; k++)
    {
        printf("#");
        
    }

    printf("\n");
}
printf("\n");

int m=0;
for(m=0; m<a; m++)
{
    int p=0;
    int n=0;
    for(n=0; n < (a-p-m-1); n++)
    {
        printf(" ");
    }
    for(p=0; p<=m; p++)
    {
        printf("#");
        
    }

    printf("\n");
}

}
