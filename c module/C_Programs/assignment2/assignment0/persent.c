#include<stdio.h>
int main(){
   float maths = 90;
   float physics = 98;
   float chemistry = 80;
   float history = 92;
   float marathi = 78;
   float total_marks=500;
   float obtained_marks = maths+physics+chemistry+history+marathi;
   printf("total marks = %f",obtained_marks);
   float persentage = (obtained_marks/total_marks)*100;
   printf("persentage= %f",persentage);
}