#include <stdio.h>
#include <math.h>
int main() {
	int bin,dec=0,mul=1;
	printf("Enter binary number: ");
	scanf("%d",&bin);
	while (bin>0) {
		dec+=(bin%10)*mul;
		bin/=10;
		mul*=2;
	}
	printf("The number in decimal is: %d",dec);
	return 0;
}

