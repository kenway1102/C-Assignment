#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c,check;
    
    printf("enter all the angles ");
    scanf("%d %d %d",&a,&b,&c);
    
    check=a+b+c;
    
    if(check==180)
        printf("Triangle is valid");
        
    else 
        printf("Triangle is not valid");
    
    
    return 0;
}
