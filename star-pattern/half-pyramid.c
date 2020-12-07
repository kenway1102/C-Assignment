#include <stdio.h>
int main() {
 int i, j, n, k, f=1;
printf("Enter number of columns : ");
scanf("%d", &n);
k = n-1;
for(i=1; i<n*2; i++)
    {for(j=1; j<=k; j++)
            printf(" ");
        for(j=1; j<=f; j++)
            printf("*");
        printf("\n");
        if(i < n) 
        {f++;
            k--;
        }
        else
        {f--;
            k++;
        }
    } 
    return 0; 
}
