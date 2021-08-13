#include<stdio.h>
#include<conio.h>
//Enter 1 day(day/month/year). TIM DAY truoc day vua nhap(day/month/year)
const int minYear = 1800 , maxYear = 3000 ;
int checkDayNhuan(int year) {
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}
int getDayOfmonth(int month, int year) {
	int dayOfmonth ;
	switch (month) {
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			dayOfmonth = 31 ;
			break ;
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			dayOfmonth = 30 ;
			break ;
		case 2 :
			int check=checkDayNhuan(year);
			if(check == 1) {
				dayOfmonth = 29 ;
			}	else {
				dayOfmonth = 28 ;
			}
			break;
	}
	return dayOfmonth ;
}


void timSoDayTruocDo(int day, int month, int year ) {
	if(day == 1) { // neu la day 1
		if(month == 1) { // neu January
			day = 31;
			month = 12 ;
			year-- ;
		} else { // khac January
			day = getDayOfmonth(month-1, year); // day trc do se la day cua month trc
			month-- ;
		}
	} else { // neu khac day 1
		day--;
	}
	printf("day trc do la %d - %d - %d", day, month, year);
}


int main() {
	int day, month, year ;
	do {
		printf("Enter year : ");
		scanf("%d", &year);
		if(year < minYear || year > maxYear ) {
			printf("Erorr. Nhap lai !\n");
		}
	} while (year < minYear || year > maxYear); // while(i<5)
	do {
		printf("Enter month : ");
		scanf("%d", &month);
		if(month < 1 || month > 12 ) {
			printf("Erorr. Nhap lai !\n");
		}
	} while (month < 1 || month > 12) ;
	int dayOfmonth = getDayOfmonth(month,year);
	do {
		printf("Enter day : ");
		scanf("%d", &day);
		if(day < 1 || day > dayOfmonth ) {
			printf("Erorr. Nhap lai !\n");
		}
	} while(day < 1 || day > dayOfmonth ) ;
	timSoDayTruocDo(day, month, year);
	return 0 ;
}

