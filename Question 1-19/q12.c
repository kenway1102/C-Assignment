#include <stdio.h>
#include <math.h>
int main() {
	int oct,dec=0,mul=1;
	printf("Enter octal number: ");
	scanf("%d",&oct);
	while (oct>0) {
		dec+=(oct%10)*mul;
		oct/=10;
		mul*=8;
	}
	printf("The number in decimal is: %d",dec);
	return 0;
}

