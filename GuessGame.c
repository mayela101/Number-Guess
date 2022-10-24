
//Number Guessing Game
#include<stdio.h>
#include<stdlib.h>

int max_number=10;
int main(){
int numberOfGuess,guess,option,max,win=0,randomNumber;
char c[2];
// display menu
do{
printf("Press 1 to play a game\n");
printf("Press 2 to change the max number\n");
printf("Press 3 to quit\n");


/*ALL FLUSH STATEMENTS ARE USED TO
 PREVENT BUFFERING 
IN CODE SIMPLY IGNORE*/
fflush(stdout);//FLUSH

scanf("%d",&option);
 //use switches and condition will be
// based off user input
switch(option){
case 1:
numberOfGuess=0;
//use rand() to output random number
randomNumber=rand()%max_number+1;
printf("Please enter a number \n");

fflush(stdout); //FLUSH

/* do-while loop to allow the user
to play as long as they want until 
they wish to exit */
do{
scanf("%s",&c);

//quit functionality
if(c[0]=='q') break;
//if not quit start game
else
{

guess=atoi(c);
fflush(stdout);

//implement "hot" and "cold" comments

if(guess>randomNumber)
{
printf("You are too high\n");
fflush(stdout);
}

else if(guess<randomNumber)
{
printf("You are too low\n");
fflush(stdout);
}
else{
win=1;
printf("You have guessed the correct number\n");
break;
}

numberOfGuess++;
}
}while(c[0]!='q' || randomNumber==guess);

break;
case 2:

printf("Enter the new maximum number:\n");

fflush(stdout); //FLUSH

//new case for opt.2
//set up max number change / validation cp
do{
scanf("%d",&max);

if(max<=0 ||max>10)
printf("Please enter a valid number \n");

else
max_number=max;
}while(max<=0 || max>10);
printf("The new maximum number generated will be between 0 to %d\n",max_number);
break;
case 3:

printf("Thank you for playing the game\n");
printf("The results of the games played are:\n");
if(win==1){
printf("You have won the game\n");
printf("Number of guess required to win are %d",numberOfGuess);
}
else{
printf("You have lost the game");
}
break;
}
}while(option!=3);
//exit
return 0;
}


