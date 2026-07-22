#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);


int main(){

    printf("#### ROCK PAPER SCISSORS ####\n");

    srand(time(NULL));

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    printf("\n");

    switch (userChoice)
    {
    case 0:
        printf("You chose ROCK\n");
        break;
    case 1:
        printf("You chose PAPER\n");
        break;
    case 2:
        printf("You chose SCISSORS\n");
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    switch (computerChoice)
    {
    case 0:
        printf("Computer chose ROCK\n");
        break;
    case 1:
        printf("Computer chose PAPER\n");
        break;
    case 2:
        printf("Computer chose SCISSORS\n");
        break;
    }

    printf("\n");

    checkWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice(){

    int computerChoice = (rand() % 3);

    return computerChoice;
}

int getUserChoice(){
    printf("\n");
    int userChoice = 0;

    printf("Options:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. SCISSORS\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);

    return userChoice - 1;
}
void checkWinner(int userChoice, int computerChoice){

    if(userChoice == computerChoice){
        printf("Its a TIE");
    }
    else if(userChoice == 0 && computerChoice == 3){
    printf("You win");
  }
  else if(userChoice == 2 && computerChoice == 1){
    printf("You win");
} else if(userChoice == 1 && computerChoice == 0){
    printf("You win");
}
else{
    printf("Computer wins");
}

}
