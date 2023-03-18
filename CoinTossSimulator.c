#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coinToss();
int main() {
    int flips;
    int headCounter = 0;
    int tailsCounter = 0;

    printf("Welcome to Coin Flip Simulator!\n");
    printf("Enter the amount of times you want to flip: ");
    scanf("%d",&flips);
    srand(time(NULL));
    for(int i=1;i<=flips;i++){
        if(coinToss() == 0)
            headCounter++;
        else
            tailsCounter++;
        if(i%10==0)
            printf("\n");
    }

    printf("\nHeads was flipped %d times \n",headCounter);
    printf("Tails was flipped %d times",tailsCounter);
    return 0;
}

int coinToss() {
    if(rand()%2 == 0){
        printf("H ");
        return 0;
    }
    else {
        printf("T ");
        return 1;
    }
}
