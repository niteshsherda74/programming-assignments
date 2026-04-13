#include<stdio.h>

int factorial(int num){
	int result = num;
	for(int i = num - 1; i>0; i--){
		result = result * i;
	}
	return(result);
}
int recursiveFactorial(int n) {
    if (n == 0 || n == 1){
        	return 1;
	}
	else{
		return n * recursiveFactorial(n - 1);
	}
}

int main(){
	int num = 5;
	printf("%d", factorial(num));
	printf("\n%d", recursiveFactorial(num));
	
}
