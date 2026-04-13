#include<stdio.h>

int main(){
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	if(year % 400 == 0){
		printf("The year is a Leap year");
	}
	else if(year % 4 == 0 && year % 100 != 0){
		printf("The year is a Leap year");
	}
	else{
		printf("The year is not a Leap year");
	}
	return(0);
}
