/* dice.c */

#include<stdio.h> // for i/o
#include<stdlib.h> // for srand() and rand()
#include<unistd.h> // for sleep

int random_value(int max) // function to generate random value, "max" is the upper limit of the random value
{
 int random = rand()%max+1; // instating the range of random values (1 -> max)
 return random;
}

void delay(int sec) // function that delays the execution of the next step that follows, "sec" is the number of sec of delay
{

 sleep(sec); // a system call in c to temporarily suspend execution, "sec" argument is the number of second of pause
 fflush(stdout); // flushes printf() buffer, instant print
 
} 

int main()
{
int balance = 1000; // initial balance of the gambler
printf("your current balance is %d\n",balance);// initial balance notification 
while(balance>0){ // to ensure program run untill the balance dries out 
	delay(1);
 	printf("please enter your bet amount : "); // asking user for putting in the bet
	int bet;
	scanf("%d",&bet);
	if(bet>balance){ // check to see if bet doesn't exceed balance
		printf("bet is too high!! current bet limit is %d\n",balance);
		continue; // way to skip a step
	 }
	else{
		delay(1); 
		printf("pick your guess between 1-6 : "); //gamblers guess 
		int guess;
		scanf("%d",&guess);
		if(guess == 0)//case to quit the program
			      {
			printf("quiting game, thankyou for playing :) !!\n"); 
			return 0;
		 }
		else if(guess>=1&&guess<=6){  // checking whether the guess lies inside the range 
			        srand(getpid()); // clever way to get different seed each time, so that "rand()" returns different random values
			        int random = random_value(6);
				if(guess == random){
					balance += (bet*3); // if guess is correct the bet is tripled and added to the balance 
					delay(1);
					printf("congratulations!! you won\n");
					printf("your current balance is %d\n",balance); //notification
				}
			 else{
 				 delay(1);
				 printf("you lost!! the number on dice was : %d\n",random); // notifying the user of the number on the dice(random)
				 balance-=bet; // if the guess is wrong then the bet is subtracted from balance 
				 printf("your current balance is %d\n",balance); //notification
				 if(balance == 0){
					 printf("oh no !! your account is empty, please come agian next time !!!\n"); // prompting user about blown account
				 }
			 }
		 }
		 else{ 
			printf("your guess is outside range, beginning new game!!\n"); // guess outside (1-6) range of possible values of dice
		        
		 }
	 }
 }
 return 0 ;
}





