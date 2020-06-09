#include <stdio.h>
#include <_Bool.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
	char* question;
	char* answers[4];
	int nr_correct;
} Question;

typedef struct {
	int credits;
	int level;
	_Bool joker_available;
	char* name;
} Player;

Player player;

// Writes filenames from directory to array
// Luis
void read_filenames(char** question_1, char** question_2, char** question_3) {
	char* matrikel[] = { "004", "017", "020", "021", "023", "036", "037", "052", "057", "070", "073", "078", "080", "082", "084", "088", "095", "099", "104", "107", "110", "114", "115", "131", "135", "140" };
	for (int m = 0; m <= 25; m++) {
		sprintf(question_1[m], "ET19%s_1.txt", matrikel[m]);
		sprintf(question_2[m], "ET19%s_2.txt", matrikel[m]);
		sprintf(question_3[m], "ET19%s_3.txt", matrikel[m]);
	}
	return 0;
}

int choose_question(Question* questions); // Anika
void print_question(const Question question); // Dominik

void print_question_50_50(const Question question)
{
	srand(time(0));
	
	int num1 = (rand() % (4));
	int num2 = (rand() % (4));
	
	while(num1 == question.nr_correct)
	{
		num1 = (rand() % (4));
	}
	
	while(num2 == question.nr_correct || num2 == num1)
	{
		num2 = (rand() % (4));
	}
	
	printf("%s \n", question.answers[num1]);
	printf("%s \n", question.answers[num2]);
	
	
} // Sven

void user_input(); // Max
_Bool check_answer(Question question, int answer);


int main(void) {
	print_welcome_message();
	player.name = input_name();
	player.level = 1;
	player.joker_available = 1;
	return 0;
}
