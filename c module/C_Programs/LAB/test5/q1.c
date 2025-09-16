#include <stdio.h>
float sut(float , float );

int main(void)
{
    float discount, cp;

    printf("Enter the cp: \n");
    scanf("%f", &cp);
    printf("Enter the discount: as 10,20,30\n");
    scanf("%f", &discount);

    int disc=sut(discount,cp);
    printf("%d is selling price",disc);
}

float sut(float discount, float cp)
{
    float sp;

    discount = (discount / 100) * cp;
    sp = cp - discount;
    printf("Selling price: %.2f\n", sp);

    return sp;
}