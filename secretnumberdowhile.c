#include <stdio.h>
int main()
{
    int secretnumber=28,guess,attempt; 
    do 
	{
        printf("Guess the secret number between 20 and 30:");
        scanf("%d",&guess);
        attempt++;

        if (guess > secretnumber) 
		{
            printf("Your guess is too high,Try again\n");
        } 
		else if (guess < secretnumber) 
		{
            printf("Your guess is too low,Try again\n");
        } 
		else
		{
            printf("Congratulations! You guessed the secret number\n");
            printf("It took you %d attempts\n", attempt);
        }
    } 
	while(guess!=secretnumber); 
	return 0;
}

