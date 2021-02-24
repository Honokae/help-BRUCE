#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coinToss();
int main() {
    int flips;
    int headCounter = 0;
    int tailsCounter = 0;

    printf("Welcome to Coin Flip Simulator!\n")