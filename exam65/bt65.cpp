#include<stdio.h>
#include<math.h>

//giai pt bac hai ax^2+bx+c=0
void pt(int a, int b, int c) {
	int  x, x1, x2, delta ;
	delta =b*b - 4*a*c ;
	if(delta < 0 ) {
		printf("pt vo nghiem");
	} else if(delta == 0 ) {
		x = -b/2*a ;
		printf("pt co nghiem kep x = %d", x) ;
	} else if(delta > 0) {
		x1 = (- b + sqrt(delta)) / 2*a ;
		x2 = (- b - sqrt(delta)) / 2*a ;
		printf("pt co 2 nghiem x1 = %d\n x2 = %d\n", x1, x2) ;

	}
}
int main() {

	printf("nhap a, b, c :") ;
	int a, b, c ;
	scanf("%d%d%d", &a, &b, &c) ;
	pt(a,b,c);
	return 0 ;
}
