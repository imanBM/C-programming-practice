#include <stdio.h>

void checkBalance(float balance);
float withdraw(float balance);
float deposit();

int main(){
    int choice = 0;
    float balance = 0.0f;

    printf("*** Welcome to the Bank ***\n");

    do
    {
    printf("\nSelect an option\n");
    printf("1. Check balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your option: ");
    scanf(" %d", &choice);

    switch (choice)
    {
    case 1:
        checkBalance(balance);
        break;

    case 2:
        balance += deposit(balance);
        break;
    
    case 3:
        balance -= withdraw(balance);
        break;
    
    default:
        printf("\nInvalid option\n");
        break;
    }
        
    } while (choice != 4);

    printf("\nThank you for using the Bank");
    

    return 0;
}

void checkBalance(float balance){
    printf("\nCurrent balance: $%.2f\n", balance);
}
float withdraw(float balance){

    float amount = 0.0f;

    printf("Enter amount to withdraw: ");
    scanf(" %f", &amount);

    if (amount < 0)
    {
        printf("Invalid amount");

        return 0.0f;
    }
    
    else if(amount > balance){
        printf("\nInsuffient funds");

        return 0.0f;
    }

    else{
        printf("\nYou succesfully withdrew $%.2f from your account\n", amount);
        return amount;
    }
    
    
}
float deposit(){

    float amount = 0.0f;

    printf("Enter amount to deposit: ");
    scanf(" %f", &amount);

    if (amount < 0)
    {
        printf("\nInvalid amount");

        return 0.0f;
    } 

    else{
        printf("\nYou have succesfully deposited $%.2f into your account\n", amount);

        return amount;
    }
   
}
