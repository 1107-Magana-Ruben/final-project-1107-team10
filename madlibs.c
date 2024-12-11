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
void explain_game_2user(int *users_choice_4file);
void scanFile(FILE *fp, char outline[][100], int *line_count, int *word_count);
void scanWords(char words[][WORD_CAPACITY], int word_count, char outline[][100]);
void printMadlib(char outline[][100], char words[][WORD_CAPACITY], int line_count, int word_count);



//Main Function
int main(){


//variables
char words[WORD_CAPACITY][WORD_CAPACITY];		
char outline[100][100];
int users_choice_4file;
int word_count;
int line_count;

//File Pointers:
FILE *input;
FILE *input2;

//Code:	

	explain_game_2user(&users_choice_4file);

	
		if(users_choice_4file == 1){
			input = fopen(FILE_NAME, "r");
			if(input == NULL){
					printf("ERROR, I Cant read the file. shutting down\n");
						return 0;
				}
		scanFile(input, outline, &line_count, &word_count);
		fclose(input);
		}		
		
			else if(users_choice_4file == 2){
					input2 = fopen(FILE_NAME2, "r");
					if(input2 == NULL){
					printf("ERROR, I can't read the file. shutting down\n");
						return 0;
					}
			scanFile(input2, outline, &line_count, &word_count);
			fclose(input2);
			}
			
				else if(input == NULL){
					printf("ERROR, I can't read the file. shutting down\n");
						return 0;
				}
				
	  				else{	
						printf("Please enter either 1 or 2, to begin the game");
						return 0;
	 				}       
	   
scanWords(words, word_count, outline);

		//printMadlib(outline, words, line_count, word_count);
		

	return 0;
}

//FUNCTIONS:

// For better organization this function provides all instructions needed for the user to understand the game

void explain_game_2user(int *users_choice_4file){

//int users_choice_4file;
	printf("\nWelcome to the madlibs game!\n");
	printf("Here's how the game works.\n");
	printf("I'll ask you to enter either a NOUN, VERB, or ADJECTIVE of your chosing.\n");
	printf("Then i'll display your creation.\n");
	printf("\nEnter either 1 or 2 to begin the game!\n");
	
	scanf("%d", users_choice_4file);
}

//char and int
void scanFile(FILE *fp, char outline[][100], int *line_count, int *word_count){

char sentence[100];
	
		while(fgets(sentence, 100, fp) != NULL){
		
			if(sentence[0] == 'A' || sentence[0] == 'N' ||sentence[0] == 'V'){
			
			(*word_count)++;
			
			}
	(*line_count)++;
	
		}	
}
//WHAT I CHANGED(DELETE IF CHANGED): Letter is not assigned to anything
void scanWords(char words[][WORD_CAPACITY], int word_count, char outline[][100]){

	for(int i = 0; i < word_count; i++){
		//char letter, outline[i][0];
			
			//if(outline[i][0] == 'A'){
				//printf("Enter An Adjective:");
				//scanf("%s", words[i]);
			//}
			
			//else if(outline[i][0] == 'N'){
				//printf("Enter An Noun:");
				//scanf("%s", words[i]);
			//}
			
			//else if(outline[i][0] == 'V'){
				//printf("Enter An Verb:");
				//scanf("%s", words[i]);
			//}
			
			//else{
				//printf("Can't Recognize Input!!!");	
				
			//}
	}	
}	
		 
void printMadlib(char outline[][100], char words[][WORD_CAPACITY], int line_count, int word_count){

int index = 0;

	for(int i = 0; i < 0; i++){
		if(outline[i][0] == 'A'|| outline[i][0] == 'V'|| outline[i][0] == 'N'){
			printf( "%s ", words[index++]);
		}else{	
			printf( "%s", outline[i]);
		}
	}
}







