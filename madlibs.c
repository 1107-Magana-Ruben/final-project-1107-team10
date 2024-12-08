//Header Comments
//Authors: Uvensis Martinez, Ruben Magana, Thomas Cabenero
//Date:12/01/2024
//Purpose:A program that creates a Madlib based on the users input and file choice.

#include <stdio.h> 
#include <stdbool.h>
//Macros

#define FILE_NAME "madlib1.txt"
#define FILE_NAME2 "madlib2.txt"
#define WORD_CAPACITY 50

//Prototypes

void words();
void scanWords();
void scanFile(FILE *fp, char word[][WORD_CAPACITY], int *word_limit);
void printMadlib(char words [][WORD_CAPACITY]);
void explain_game_2user();

//Main Function
int main(){
int users_choice_4file;

	//provides instrucions then scans for users choice to begin the program
	explain_game_2user();
	scanf("%d",&users_choice_4file);
	
	char words[WORD_CAPACITY][WORD_CAPCITY];
	
		// Uv: it runs either file 1 or 2 then  
		
		if(users_choice_4file == 1){
			FILE *input = fopen(FILE_NAME, "r");
				//shuts down program if it cant read file
				if (input == NULL){
					printf("ERROR, I Cant read the file. shutting down\n");
				return 0;
				}
				
		fscanf
			fclose(input);
			
		} else if(users_choice_4file == 2){
			FILE *input2 = fopen(FILE_NAME2, "r");
				//shuts down program if it cant read file 2
	 			if (input2 == NULL){
				printf("ERROR, I Cant read the file. shutting down\n");
				return 0;
				}
		
			fscanf
			fclose(input2);
					
		} else{	
			printf("Please enter either 1 or 2, to begin the game");
			return 0;
		}

printMadlib(words);


return 0;
}

//Functions:

// For better organization this function provides all instructions needed for the user to understand the game

void explain_game_2user(){
	printf("\nWelcome to the madlibs game!\n");
	printf("Here's how the game works.\n");
	printf("I'll ask you to enter either a NOUN, VERB, or ADJECTIVE of your chosing.\n");
	printf("Then i'll display your creation.\n");
	printf("\nEnter either 1 or 2 to begin the game!\n");
}

void scanFile(FILE *fp, char words[][WORD_CAPACITY





