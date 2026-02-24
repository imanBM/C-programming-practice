#include <stdio.h>

typedef struct
{
   char model[25];
   int year;
   int price;
} Car;


int main(){
    
Car car1 = {"Porsche", 2025, 35000};
Car car2 = {"Royce", 2022, 1000000};
Car car3 = {"BMW", 2024, 250000};

printf("%s %d $%d\n",car1.model, car1.year, car1.price);
printf("%s %d $%d\n",car2.model, car2.year, car2.price);
printf("%s %d $%d\n",car3.model, car3.year, car3.price);


    return 0;
}