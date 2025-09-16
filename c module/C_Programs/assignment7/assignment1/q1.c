#include<stdio.h>
int even_odd();
void main(){

int x=even_odd();
printf("%d",x);

}

int even_odd(){
    int no =21;
return no%2==0;
}