#include <stdio.h>


int main(void) {
    int cashReturn;
    printf("Enter the amount of change to be returned:\n");
    scanf("%d", &cashReturn);
    int change = 0;
    int coins = 0;

    while (cashReturn > 0) {
        if (cashReturn >= 25){
            int count = cashReturn / 25;
            change = cashReturn % 25;
            coins += count;
            cashReturn = change;
            printf("Coins so far 25 %i %i \n", coins, change);
        } else if (cashReturn >= 10){
            int count = cashReturn / 10;
            change = cashReturn % 10;
            coins += count;
            cashReturn = change;
            printf("Coins so far 10 %i %i \n", coins, change);

        } 
        else if (cashReturn >= 5){
            int count = cashReturn / 5;
            change = cashReturn % 5;
            coins += count;
            cashReturn = change;
            printf("Coins so far 5 %i %i \n", coins, change);

        } 
        else {
            coins += cashReturn;
            cashReturn = 0;
            printf("Coins so far 0 %i %i \n", coins, change);
        }
    }
    printf("Coins to return %i \n", coins);
}
