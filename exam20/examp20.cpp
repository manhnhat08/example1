#include<stdio.h>

void usc(int n) {
	printf("uoc so cua so n la :");
	int i = 1;
	while(i<=n) {
		if(n%i==0) {
			printf(" %d",i);
		}
		i+=1;
	};
}

int main() {
	int n;
	printf("nhap so nguyen duong n = \n");
	scanf("%d",&n);
	usc(n);
	return 0;
}
