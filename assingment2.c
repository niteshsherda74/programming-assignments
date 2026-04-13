#include <stdio.h>
#include <math.h>

int main(){
	char op;
	int num1, num2;
	printf("Calculator Operation:\n");
	printf(" +, -, * , /\n");
	printf("Enter an operator: ");
	scanf("%c", &op);
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter another number: ");
	scanf("%d", &num2);
	switch(op){
		case('+'):
			printf("Result = %.2d",(num1 + num2));
			break;
		case('-'):
			printf("Result = %.2d",num1 - num2);
			break;
		case('*'):
			printf("Result = %.2d",num1 * num2);
			break;
		case('/'):
			printf("Result = %.2f",num1 / num2);
			break;
		case('%'):
			printf("Result = %.2f",num1 % num2);
			break;
		default:
			printf("Incorrect input!");
	}
}
