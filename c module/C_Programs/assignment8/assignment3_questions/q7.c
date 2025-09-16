
#include <stdio.h>
void strongno(int);
int main() {
     int no = 145;
    strongno(no);
  
}

void strongno(int no){
     
    int temp = no; 
    int r1, sum = 0;

    while (temp != 0) {
        r1 = temp % 10;

        int fact = 1;
        int i = 1;
        while (i <= r1) {
            fact = fact * i;
            i++;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == no) {
        printf("%d is a Strong number\n", no);
    } else {
        printf("%d is not a Strong number\n", no);
    }

}