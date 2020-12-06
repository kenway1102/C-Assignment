#include <stdio.h>
int main() {
	int freq[10]={0},num;
	printf("Enter number: ");
	scanf("%d",&num);
	while (num>0) {
		freq[num%10]++;
		num/=10;
	}
	for(int i=0;i<=9;i++) 
		printf("%d :\t%d\n",i,freq[i]);
	return 0;
}

