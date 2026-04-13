#include <stdio.h>

void main(){
	char op;
	int num1, num2;
	printf("Calculator Operation:\n");
	printf("+ , - , * , / , ^ , !\n");
	printf("Enter an operator: ");
	scanf("%c", &op);
	printf("Enter a number: ");
	scanf("%d", &num1);
	printf("Enter another number: ");
	scanf("%d", &num2);
	switch(op){
		case('+'):
			printf("Result = %.2f",(num1 + num2));
			break;
		case('-'):
			printf("Result = %.2f",num1 - num2);
			break;
		case('*'):
			printf("Result = %.2f",num1 * num2);
			break;
		case('/'):
			if(num1 == 0 || num2 == 0){
				printf("Numbers cannot be 0 for division");
			}
			else{
				printf("Result = %.2f",num1 / num2);
			}
			break;
		case('%'):
			printf("Result = %.2f",num1 % num2);
			break;
		case('^'):
			int result = num1;
			if(num2 == 0){
				printf("result = 1");
			}
			else{
			for(int i = 1; i < num2; i++){
				result = num1*result;
			}
			printf("Result = %d", result);
			}
			break;
		default:
			printf("Incorrect input!");
			break;
	}
}

