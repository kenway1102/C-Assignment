. #include <stdio.h>
#include <math.h>
int main() {
	int bin,dec=0,rem,mul=1,dig=0;
	char hex_rev[20],hex[20];
	printf("Enter number in binary: ");
	scanf("%d",&bin);
	int i = 0;
	while (bin>0) {
		rem=bin%10000;
		while (rem>0) {
			dec+=(rem%10)*mul;
			rem/=10;
			mul*=2;
		}
		if (dec>10) 
			dec=dec+55;
		else 
			dec=dec+48;
		mul=1;
		hex_rev[i]=dec;
		dec=0;
		bin/=10000;
		i++;
		dig++;
	}
	for(i=0;i<dig;i++) 
		hex[i]=hex_rev[dig-i-1];
	printf("The hexadecimal value is: %s",hex);
	return 0;
}

