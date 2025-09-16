
#include <stdio.h>
int strongno(int);
int main() {
      int no = 145;
   if(strongno(no)) {
    printf("is strong");
   }
  
}

int strongno(int no){
    
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
return 1;
    } else {
return 0;    }

}