#include <stdio.h>

void main() {
    int age[5];
    float ticket_price, total = 0;

    printf("Enter ticket price: ");
    scanf("%f", &ticket_price);

    for (int i = 0; i < 5; i++) {
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &age[i]);

        if (age[i] < 12) {
            total += ticket_price * 0.70; 
        }
        else if (age[i] > 59) {
            total += ticket_price * 0.50; 
        }
        else {
            total += ticket_price; 
        }
    }

    printf("Total ticket amount: %f\n", total);
}
