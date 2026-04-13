#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
	int choice;
	char str1[20];
	char str2[20];
	bool verify = true;
	do{
		printf("Would you like to: \n1. Compare \n2. Concatenate\n3. Find their length \n4. Copy\n");
		scanf("%d",&choice);
		if(choice == 1||choice == 2||choice == 3||choice == 4){
			verify = false;
		}
		else{
			printf("Invalid Input");
		}
	}while(verify);
	switch(choice){
		case 1 :
			printf("Please enter a sentence: \n");
			scanf(" %[^\n]", str1);
			printf("Please enter another sentence: \n");
			scanf(" %[^\n]", str2);
			if(strcmp(str1,str2) == 0){
				printf("The strings are equal!");
			}
			else{
				printf("The strings are not equal");
			}
			break;
		case 2 :
			printf("Please enter a sentence: \n");
			scanf(" %[^\n]", str1);
			printf("Please enter another sentence: \n");
			scanf(" %[^\n]", str2);
			printf("New string is:\n %s", (strcat(str1,str2)));
			break;
		case 3 :
			printf("Please enter a sentence: \n");
			scanf(" %[^\n]", str1);
			printf("The length of the string is: %lu", (strlen(str1)));
			break;
		case 4 :
			printf("Please enter a sentence: \n");
			scanf(" %[^\n]", str1);
			strcpy(str2,str1);
			printf("%s is scored in str2", (str2));
			break;
	}
	
}