include <stdio.h>
int main()
{  int a=1,b=0;
  for(int i=0;i<5;++i)
   {  printf("\n");
      for(int j=0;j<5;++j)
       if(i!=0 && i!=4 && j!=0 && j!=4)
       printf("%d",b);
       else
       printf("%d",a); 
    }
    return 0;
}
