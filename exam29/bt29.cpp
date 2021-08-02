#include <stdio.h>

// tim uoc so le max cua so n
int main() {
	printf("nhap n ");
	int n ;
	scanf("%d", &n);
	int i= 1;
	int max =1 ; 
	while( i <= n) 
	 {
		if((n % i == 0) && (i % 2 == 1))
		 {
			if(i> max)
			 {
				max =i ;
			}
			printf("%d", i);
		}
		i++;
	}
	printf("\nuoc so le max la %d ", max);
	return 0;
}
