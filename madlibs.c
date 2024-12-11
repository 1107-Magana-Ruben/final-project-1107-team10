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
#define FIXER 100
//Prototypes
void explain_game_2user();
void scanFile(FILE *fp, char outline[][100], int *line_count, int *word_count);
void scanWords(char words[][WORD_CAPACITY], int word_count, char outline[][100], int line_count);
void printMadlib(char outline[][100], char words[][WORD_CAPACITY], int line_count, int word_count);



//Main Function
int main(){


//variables
char words[WORD_CAPACITY][WORD_CAPACITY];		
char outline[100][100];
int users_choice_4file;
int word_count = 0;
int line_count = 0;

//Code:	

	explain_game_2user();
		printf("\nEnter either 1 or 2 to begin the game!\n");
		scanf("%d", &users_choice_4file);
		
		FILE *input = NULL;

		if(users_choice_4file == 1){
			input = fopen(FILE_NAME, "r");
				printf("opened file 1 \n"); 
		}
			else if(users_choice_4file == 2){
					input = fopen(FILE_NAME2, "r");
						printf("opened file 2 \n"); 
			}		
	  				else{	
						printf("Please enter either 1 or 2, to begin the game");
						return 0;
	 				}       
	
		if(input == NULL){
		printf("error");
			return 0;
	}

scanFile(input, outline, &line_count, &word_count);


fclose(input);

scanWords(words, word_count, outline, line_count);

printMadlib(outline, words, line_count, word_count);
		

	return 0;
}

//FUNCTIONS:

// For better organization this function provides all instructions needed for the user to understand the game

void explain_game_2user(){

//int users_choice_4file;
	printf("\nWelcome to the madlibs game!\n");
	printf("Here's how the game works.\n");
	printf("I'll ask you to enter either a NOUN, VERB, or ADJECTIVE of your chosing.\n");
	printf("Then i'll display your creation.\n");

	
	
}

//char and int
void scanFile(FILE *fp, char outline[][100], int *line_count, int *word_count){

char sentence[100];
	*line_count = 0;
	*word_count = 0;
	int i;
	
		while(fgets(sentence, FIXER, fp) != NULL){
		int i = 0;
			while(sentence[i] != '\0' && i<FIXER){
			if(sentence[i] != '\n'){
				outline [*line_count][i] = sentence[i];
			}
				i++;
				}
			outline[*line_count][i] = '\0';		
			
			if(sentence[0] == 'A' || sentence[0] == 'N' ||sentence[0] == 'V'){
				(*word_count)++;
			}
					(*line_count)++;	
		}	
}
//WHAT I CHANGED(DELETE IF CHANGED): Letter is not assigned to anything
void scanWords(char words[][WORD_CAPACITY], int word_count, char outline[][100], int line_count){

int savedWords = 0; 

	for(int i = 0; i < word_count; i++){
		while(outline[savedWords][0] != 'A' && outline[savedWords][0] != 'N' && outline[savedWords][0] != 'V'){
		savedWords++;
		}

char letter = outline[savedWords][0];
			
			if(letter == 'A'){
				printf("Enter An Adjective: ");			
			}			
			else if(letter == 'N'){
				printf("Enter An Noun: ");				
			}			
			else if(letter == 'V'){
				printf("Enter An Verb: ");
				
			}
				
			
			scanf("%s ", words[savedWords]);
				savedWords++;
	}	
}	
		 
void printMadlib(char outline[][100], char words[][WORD_CAPACITY], int line_count, int word_count){

int index = 0;

	for(int i = 0; i < line_count; i++){
		if(outline[i][0] == 'A'|| outline[i][0] == 'V'|| outline[i][0] == 'N'){
		
			printf("%s ", words[index++]);
		}else{	
			printf("%s ", outline[i]);
		}
	}
	printf("\n");
	printf("\n");
}







