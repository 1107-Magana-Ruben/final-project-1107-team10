//Header Comments
//Authors: Uvensis Martinez, , 
//Date:
//Purpose:
// 2 + 2 = ?
#include <stdio.h> 
#include <stdbool.h>
//Macros
#define FILE_NAME "madlib1.txt"
#define FILE_NAME2 "madlib2.txt"

//Prototypes
//void madInput(FILE *x,char x, );
void words();
void scanWords();
void scanFile();
void printFile();
void explain_game_2user();

//Main Function
int main(){
int users_choice_4file;

	//provides instrucions then scans for users choice to begin the program
	explain_game_2user();
	scanf("%d",&users_choice_4file);
	
		// Uv: it runs either file 1 or 2 then  
		if(users_choice_4file == 1){
			FILE *input = fopen(FILE_NAME, "r");
				//shuts down program if it cant read file
				if (input == NULL){
				printf("ERROR, I Cant read the file. shutting down\n");
				return 0;
				}
			//words
			//scanwords
			//
			//	
			fclose(input);
			
		} else if(users_choice_4file == 2){
			FILE *input2 = fopen(FILE_NAME2, "r");
				//shuts down program if it cant read file 2
	 			if (input2 == NULL){
				printf("ERROR, I Cant read the file. shutting down\n");
				return 0;
				}
			//
			//
			//
			//	
			fclose(input2);
					
		} else{	
			printf("Please enter either 1 or 2, to begin the game");
		}
//variables
char adjective;
char verb;
char noun;



return 0;
}

// For better organization this function provides all instructions needed for the user to understand the game
void explain_game_2user(){
	printf("\nWelcome to the madlibs game!\n");
	printf("Here's how the game works.\n");
	printf("I'll ask you to enter either a NOUN, VERB, or ADJECTIVE of your chosing.\n");
	printf("Then i'll display your creation.\n");
	printf("\nEnter either 1 or 2 to begin the game!\n");
}

//Functions










