#include<stdio.h>
#include<math.h>
void phuongTrinh(int a, int b, int c) {
	int delta, xA, xB, x ;
		delta = b*b - 4*a*c ;
	if(a != 0) {

// check a khac 0
		if(delta > 0 ) {                             // truong hop delta > 0
			xA = ((-b + sqrt(delta))/ (2*a)) ;
			xB = ((-b - sqrt(delta))/ (2*a)) ;
			if(xA > 0 ) {                           
				printf("x1 = %d\n", +sqrt(xA)) ;
				printf("x2 = %d\n", -sqrt(xA)) ;
			} else if(xA == 0 ) {                  
				printf("x = 0\n") ;
			}
			if(xB > 0) { 
				printf("x3 = %d\n", +sqrt(xB)) ;
				printf("x4 = %d\n", -sqrt(xB)) ;
			} else if(xB == 0 ) { 
				printf("x = 0\n") ;
			}
		} else if(delta == 0 ) {                    // truong hop delta == 0
			x = (-b / (2*a)) ;
			if(x > 0 ) {
				printf("x = %d\n", x) ;
			} else if(x == 0 ) {
				printf("x = 0\n");
			} else if(x < 0 ) {
				printf("pt vo nghiem");
			}
		} else if(delta < 0 ) {                    // truong hop delta < 0
			printf(" pt vo nghiem") ;
		}
	} else if(a == 0 && b != 0 ) {
		
// check a == 0 & b khac 0
		x = (-c / b) ;
		if(x > 0 ) {
			printf("x1 = %d\n", +sqrt(x));
			printf("x2 = %d\n", -sqrt(x));
		} else if(x == 0 ) {
			printf("x = 0\n");
		} else {
			printf("pt vo nghiem");
		}
	} else {
// check a == 0 & b == 0 & c khac 0
		if(a == 0 && b == 0 && c != 0 ) {
			printf("pt vo nghiem");
		} else
			printf("pt vo so nghiem");
	}
}

int main() {

	printf("enter a, b, c :");
	int a, b, c ;
	scanf("%d%d%d", &a, &b, &c);
	phuongTrinh(a,b,c) ;
	return 0 ;
}
