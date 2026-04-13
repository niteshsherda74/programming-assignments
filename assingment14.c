#include<stdio.h>
#include<math.h>
int main(){
	int binNum;
	int temp;
	printf("Enter the four digit Binary Number: ");
	scanf("%d",&binNum);
	temp = binNum;
	while(temp!=0){
		if (temp%10 == 1 || temp%10 == 0){
			temp/=10;
		}
		else{
			printf("invalid input");
			return(0);
		}
	}
	int decimal = 0;
	int i = 0;
	while(binNum!=0){
		decimal = decimal + (binNum%10*pow(2,i));
		binNum /= 10;
		i++;
	}
	printf("\nThe Decimal Number is: %d\n",decimal);
}

