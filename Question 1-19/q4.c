#include <stdio.h>
#include <math.h>
int main() {
	int num,dig=0,temp=0,x;
	printf("Enter a number: ");
	scanf("%d",&num);
	int zeros=log10(num);
	while (num>0) {
		temp=temp*10+(num%10);
		num/=10;
	}
	zeros-=log10(temp);
	while (temp>0) {
		x=temp%10;
		if (x==1)
			printf("one ");
		else if (x==2)
			printf("two ");
		else if (x==3)
			printf("three ");
		else if (x==4)
			printf("four ");
		else if (x==5)
			printf("five ");
		else if (x==6)
			printf("six ");
		else if (x==7)
			printf("seven ");
		else if (x==8)
			printf("eight ");
		else if (x==9)
			printf("nine ");
		else if(x==0)
			printf("zero ");
		temp/=10;
	}
	
	while (zeros>0) {
		printf("zero ");
		zeros--;
	}
}

