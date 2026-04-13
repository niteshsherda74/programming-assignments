#include<stdio.h>

int main(){
	int userNum, units, tens, hundreds;
	printf("Enter a number: ");
	scanf("%d", &userNum);
	units = userNum % 10;
	tens = (userNum % 100 - units) / 10;
	hundreds = (userNum - (tens * 10) - units)/100;
	if(((units*units*units) + (tens*tens*tens) + (hundreds*hundreds*hundreds)) == userNum){
		printf("It is an Armstromg Number!");
	}
	else{
		printf("It is not an Armstrong Number");
	}
}
