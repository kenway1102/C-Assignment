#include <stdio.h>
int main() {
int i, j, r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    for(i=1; i<=r; i++)
    {for(j=1; j<i; j++)
        {printf(" ");
        }
        for(j=1; j<=(r*2 - (2*i-1)); j++)
        {if(i==1 || j==1 || j==(r*2 - (2*i - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0; 
}  
