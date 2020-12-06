#include <stdio.h>
int main() {
	int oct,oct_rev=0,bin=0,x,mul=1;
	printf("Enter number in octal: ");
	scanf("%d",&oct);
	while (oct>0) {
		oct_rev=oct_rev*10+oct%10;
		oct/=10;
	}
	printf("The number in binary is: ");
	while (oct_rev>0) {
		x=oct_rev%10;
		while (x>0) {
			bin+=(x%2)*mul;
			x/=2;
			mul*=10;
		}
		printf("%0.3d",bin);
		bin=0;
		mul=1;
		oct_rev/=10;
	}
}

