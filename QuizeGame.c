#include<stdio.h>
//quize game
int main(void) {
	enum MyEnum {NUMBER_OF_QUESTIONS = 5}; //const is not a constant in c
	int ans[NUMBER_OF_QUESTIONS] = { 0 };
	int points[NUMBER_OF_QUESTIONS] = { 0 };
	unsigned int loader,counter = 0;
	printf("Welecom To The Quize Game\n");
	printf("> Press 7 to start\n");
	printf("> Press 0 to quit\n");
	scanf_s("%d", &loader);
	if (loader == 0) 
	{
		printf("> THE END\n");
		return 0;
	}
	else if(loader != 7)
	{
		printf("> invalid number, try again later\n");
	}
	else if (loader==7)
	{
		printf("> The game has started\n");

		//Q1
		printf("1) What is the capital city of Australia?\n");
		printf("1) Sydney\n");
		printf("2) Canberra\n");
		printf("3) Melbourne\n");
		printf("4) Brisbane\n");
		printf("5) Perth\n");
		scanf_s("%d", &ans[counter]);
		if (ans[counter] == 2)
		{
			printf("Correct ,Good job\n");
			++points[counter];
		}
		else 
		{
			printf("False, maybe another time\n");
		}
		++counter;
		
		//Q2
		printf("Which planet is known as the Red Planet ?\n");
		printf("1) Venus\n");
		printf("2) Mars\n");
		printf("3) Jupiter\n");
		printf("4) Saturn\n");
		printf("5) Uranus\n");
		scanf_s("%d", &ans[counter]);
		if (ans[counter] == 2)
		{
			printf("Correct ,Good job");
			++points[counter];
		}
		else
		{
			printf("False, maybe another time\n");
		}
		++counter;


		//Q3
		printf("Which element has the chemical symbol H ?\n");
		printf("1) Hydrogen\n");
		printf("2) Helium\n");
		printf("3) Carbon\n");
		printf("4) Oxygen\n");
		printf("5) Nitrogen\n");
		scanf_s("%d", &ans[counter]);
		if (ans[counter] == 1)
		{
			printf("Correct ,Good job\n");
			++points[counter];
		}
		else
		{
			printf("False, maybe another time\n");
		}
		++counter;

		//Q4
		printf("Who wrote the play 'Romeo and Juliet' ?\n");
		printf("1) William Shakespeare\n ");
		printf("2) Charles Dickens\n ");
		printf("3) Jane Austen\n");
		printf("4) Mark Twain \n");
		printf("5) Leo Tolstoy\n");
		scanf_s("%d", &ans[counter]);
		if (ans[counter] == 1)
		{
			printf("Correct ,Good job\n");
			++points[counter];
		}
		else
		{
			printf("False, maybe another time\n");
		}
		++counter;
		//Q5
		printf("What is the largest mammal in the world?\n");
		printf("1) African Elephant\n");
		printf("2) Blue Whale\n");
		printf("3) Giraffe\n");
		printf("4) Polar Bear\n");
		printf("5) Great White Shark\n");
		scanf_s("%d", &ans[counter]);
		if (ans[counter] == 2)
		{
			printf("Correct ,Good job\n");
			++points[counter];
		}
		else
		{
			printf("False, maybe another time\n");
		}
		++counter;
			
			
			
	}
}