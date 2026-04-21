
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	char name[50], college[50], department[50];
	int ans, score = 0;
	srand(time(0));
	int choice;
	bool ver = true;
	bool again = true;
	
	printf("PLEASE ENTER FOLLOWING DETAILS BEFORE ENTERING THE QUIZ\n\n");

	printf("Name: ");
	scanf("%s", name);

	printf("\nThanks for submission!\nNOW, START THE QUIZ\n\n");
	char *CQs[] = {"What is the correct extension of a C file:\n1. .cpp 8\n2. .c 28\n3. .py 2\n4. .java 22\n",
			 "Which data type is used for a single string:\n1. int\n2. :\n3. ;\n4. ,\n",
			 "C language was developed by:\n1. Dennis Ritchie\n2. James Gosling\n3. Guido van Rossum\n4. Bjarne Stroustrup\n",
			 "Which is not a programming language?\n1. Python\n2. Java\n3. HTML\n4. C\n",
			 "Which symbol is used for comments in C?\n1. //\n2. ##\n3. **\n4. %%\n",
			 "Size of int (generally) is:\n1. 2 bytes\n2. 4 bytes\n3. 8 bytes\n4. 1 byte\n",
			 "Which loop is entry controlled?\n1. do-while\n2. while\n3. both A and B\n4. none\n"};
	int Canswers[] = {2, 3, 1, 3, 1, 2, 2};
	
	char *GQs[] = {"What is the capital of Japan?\n1) Seoul\n2) Tokyo\n3) Beijing\n4) Kyoto\n",
			"Which is the largest ocean in the world?\n1) Atlantic\n2) Indian\n3) Pacific\n4) Arctic\n",
			"Which planet is known as the Red Planet?\n1) Venus\n2) Mars\n3) Jupiter\n4) Mercury\n",
			"Which country has the largest population?\n1) USA\n2) India\n3) China\n4) Russia\n",
			"How many days are there in a leap year?\n1) 364\n2) 365\n3) 366\n4) 367\n",
			"Which gas do humans need to breathe to survive?\n1) Nitrogen\n2) Oxygen\n3) Carbon dioxide\n4) Hydrogen\n",
			"Which is the tallest mountain in the world?\n1) K2\n2) Kangchenjunga\n3) Mount Everest\n4) Makalu\n"
			};
	int Ganswers[] = {2, 3, 2, 2, 3, 2, 3}; 
			
	char *FQs[] = {"What does F1 stand for?\n1) Fast One\n2) Formula One\n3) Fuel One\n4) Force One\n",
			"How many wheels does an F1 car have?\n1) 2\n2) 4\n3) 6\n4) 8\n",
			"Which color is traditionally associated with Ferrari?\n1) Blue\n2) Red\n3) Yellow\n4) Black\n",
			"Which driver has won the most F1 World Championships?\n1) Lewis Hamilton\n2) Michael Schumacher\n3) Ayrton Senna\n4) Max Verstappen\n",
			"Which company supplies tyres for modern F1 cars?\n1) Michelin\n2) Bridgestone\n3) Pirelli\n4) Goodyear\n",
			"What flag is shown to signal the winner of a race?\n1) Red flag\n2) Yellow flag\n3) Green flag\n4) Checkered flag\n",
			"What is the name of an F1 pit stop used to change tyres?\n1) Refuel stop\n2) Service stop\n3) Tyre stop\n4) Pit stop\n"
			};
	int Fanswers[] = {2, 2, 2, 1, 3, 4, 4};   
	do{  
		while(ver){
		    printf("Please select a topic:\n1. C programing\n2. F1\n3. Geography\n");
		    scanf("%d", &choice);
		    if(choice == 1|| choice == 2||choice == 3){
		    	ver = false;
		    }else{
		     	printf("Invalid Input\n");
		    }
		}
		
		int QOrder[] = {0,1,2,3,4,5,6};
		for(int i = 6; i > 0; i--){
		int j = rand()% (i + 1);
		int temp = QOrder[i];
		QOrder[i] = QOrder[j];
		QOrder[j] =temp; 
		}
		ver = true;
		switch(choice){
		case 1:
		    for(int i = 0; i < 7; i++){
			printf("\nQ%d. %s", i + 1, CQs[QOrder[i]]);
			ver = true;					// imp**
			while(ver){
				printf("Enter your answer: ");
				scanf("%d", &ans);
				if(ans == 1|| ans == 2||ans == 3){
					ver = false;
					if(ans == Canswers[QOrder[i]]) {
						printf("Answer is correct\n");
						score++;
					}
					else {
						printf("Wrong answer\n");
					}
				}
				else {
					printf("Invald Input");
				}
			}
		     }
		     break;
		case 3:
		    for(int i = 0; i < 7; i++){
			printf("\nQ%d. %s", i + 1, GQs[QOrder[i]]);
			ver = true;
			while(ver){
				printf("Enter your answer: ");
				scanf("%d", &ans);
				if(ans == 1|| ans == 2||ans == 3){
					ver = false;
					if(ans == Ganswers[QOrder[i]]) {
						printf("Answer is correct\n");
						score++;
					}
					else {
						printf("Wrong answer\n");
					}
				}
				else {
					printf("Invald Input");
				}
					
			}
		     }
		     break;
		case 2:
		    for(int i = 0; i < 7; i++){
			printf("\nQ%d. %s", i + 1, FQs[QOrder[i]]);
			ver = true;
			while(ver){
				printf("Enter your answer: ");
				scanf("%d", &ans);
				if(ans == 1|| ans == 2||ans == 3){
					ver = false;
					if(ans == Fanswers[QOrder[i]]) {
						printf("Answer is correct\n");
						score++;
					}
					else {
						printf("Wrong answer\n");
					}
				}
				else {
					printf("Invald Input");
				}	
			}
		     break;
		}
		}
		// Final Score
		printf("\n🎉 CONGRATULATIONS %s! 🎉\n", name);
		printf("\n==============================\n");
		printf("QUIZ COMPLETED\n");
		printf("Name: %s\n", name);
		printf("Your Final Score: %d / 7\n", score);

		if(score >= 5){
			printf("Great Job! You passed the quiz \n");
		}
		else{
			printf("Keep practicing! You can do better \n");
		}
		printf("\n\nWhould you like to try again or try a choose a different topic?(1. y / 2. n)\n");
		int strAgain;
		scanf("%d",&strAgain);
		if(strAgain == 2){
			again = false;
		}
		ver = true;
		
	}while(again);

	return 0;
}
