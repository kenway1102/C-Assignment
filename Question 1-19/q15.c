. #include <stdio.h>
int main() {
	int dec,oct=0,mul=1;
	printf("Enter number in decimal: ");
	scanf("%d",&dec);
	while (dec>0) {
		oct+=(dec%8)*mul;
		dec/=8;
		mul*=10;
	}
	printf("The number in octal is: %d",oct);
	return 0;
}

