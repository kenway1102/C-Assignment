#include <stdio.h>
int main() {
int i, j, n, f=1;
    printf("Enter number of columns:");
    scanf("%d",&n);
    for(i=1;i<n*2;i++)
    {
        for(j=1; j<=f; j++)
        {
            printf("*");
        }
        if(i < n)
        {
            f++;
        }
        else
        {
            f--;
        }
        printf("\n");
    }
    return 0;
