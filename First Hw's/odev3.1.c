#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("please enter a value for n \n: ");
    scanf("%d",&n);

    int mario [n][n];
    int i, j;

//1. þekil
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (j<=i)
            {
                mario[i][j]=1;
            }
            else
            {
                mario[i][j]=0;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d",mario[i][j]);
        }
        printf("\n");
    }
//2. þekil
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if (j<=i)
            {
                mario[i][j]=1;
            }
            else
            {
                mario[i][j]=0;
            }
        }
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=n-1; j>-1; j--)
        {
            printf("%d",mario[i][j]);
        }
        printf("\n");
    }
    return 0;
}
