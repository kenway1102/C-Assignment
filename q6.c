#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c,check;
    
    printf("enter all the angles ");
    scanf("%d %d %d",&a,&b,&c);
    
    check=a+b+c;
    
    if(check==180)
        printf("Equilateral triangle");
        
    else if(a==b||b=c||c=a)
        printf("isosceles triangle ");
else 
        printf("scalene triangle ");
    return 0;
}
