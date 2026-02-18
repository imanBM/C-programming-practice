#include <stdio.h>

int main(){
    int seatChoice, options;
    int seat[10] = {0,0,0,0,0,0,0,0,0,0};

    printf("\n*** HELLO AND WELCOME ***\n");

    while(1){
        printf("--Airplane seat managment--\n");
        printf("Choose an option\n");
        printf("1. See available seats\n");
        printf("2. Reserve seat\n");
        printf("3. Exit\n");
        scanf("%d", &options);

        if(options == 1){
            for(int i = 0; i < 10; i++){
             if(seat[i] == 0){
                printf("%d. [Available]\n", i + 1);
             }
             else{
                printf("%d. [Reserved]\n", i + 1);
             }

            }
        }

        else if(options == 2){
            printf("Enter a seat to reserve 1-10: ");
            scanf("%d", &seatChoice);

            if(seatChoice > 10 || seatChoice < 1){
                printf("Invalid choice\n");
            }
            else if(seat[seatChoice -1 ]== 1){
                printf("\nSeat No.%d has already been reserved", seatChoice);
            }

            else{
                seat[seatChoice - 1] = 1;
                printf("\nSeat No.%d has been allocated to you\n", seatChoice);
            }
            
                
        }

        else{
            break;
        }

        
    }
        

    return 0;
}