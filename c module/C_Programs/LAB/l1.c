#include <stdio.h>
void main()
{
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);

    int count500 = 0, count200 = 0, count100 = 0, count50 = 0, count20 = 0, count10 = 0;

    if (amount >= 500) {
        count500 = amount / 500;
        amount = amount % 500;
    }
    if (amount >= 200) {
        count200 = amount / 200;
        amount = amount % 200;
    }
    if (amount >= 100) {
        count100 = amount / 100;
        amount = amount % 100;
    }
    if (amount >= 50) {
        count50 = amount / 50;
        amount = amount % 50;
    }
    if (amount >= 20) {
        count20 = amount / 20;
        amount = amount % 20;
    }
    if (amount >= 10) {
        count10 = amount / 10;
        amount = amount % 10;
    }

    printf("%d \n", count500);
    printf("%d \n", count200);
    printf("%d \n", count100);
    printf("%d\n", count50);
    printf("%d\n", count20);
    printf("%d\n",count10);
}