// c0008
#include <stdio.h>

int game(int Target,int Guess)
{
	int i;
	int count=0;
	for(i = 1; i <= 10 ;i++){
		printf("Round %d.) Enter your guess: ", i);
		scanf("%d" ,&Guess);
		if(Guess < Target){
			printf("Your answer is too low!! let's try that again.\n");
		}
		else if (Guess > Target){
			printf("Your answer is too high!! let's try that again.\n");
		}
		else{
			printf("Congratulations!! target is %d and you guess %d round.",Target,i );
			break;
		}
		if(i == 10 && Guess != Target){
		printf("Game Over!!!" );
		}
	
	}

	return 0;
}

main()
{
	int Target,Guess;
	printf("Enter your target:\n");
	scanf("%d" ,&Target);
	while (Target < 0 || Target > 100){
		printf("Target error! please re-enter your target.\n" );
		printf("Enter your target:\n");
		scanf("%d" ,&Target);
	}
	game(Target,Guess);
	
}
