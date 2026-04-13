#include<stdio.h>
int main(){
        int num;
	int temp;
	int reversed = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!= 0){
		temp = num % 10;
		reversed = (reversed * 10) + temp;
		num = num/10;
	}
        printf("The reversed number is:\n %d\n",reversed);
}






