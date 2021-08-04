#include<stdio.h>

// giai pt ax+b = 0
int main() {

	printf(" nhap a va b : ") ;
	int a, b ;
	float x ;
	scanf("%d%d", &a, &b );
	if(a == 0) {
		if(b == 0 ) {
			printf("pt co vo so nghiem\n ") ;
		} else
			printf("pt vo nghiem\n ") ;

	} else if(a != 0) {
		x = (-b/a) ;

		printf("pt co nghiem x = %f", x) ;
	}

	return 0 ;
}
