#include <stdio.h>
int main() {
	int dec,bin=0,mul=1;
	printf("Enter number in decimal: ");
	scanf("%d",&dec);
	while (dec>0) {
		bin+=(dec%2)*mul;
		dec/=2;
		mul*=10;
	}
	printf("The number in binary is: %d",bin);
	return 0;
}

