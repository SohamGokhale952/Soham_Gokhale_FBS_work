#include <stdio.h>
struct Product
{
    int id;
    int quantity;
    int name;
    int price;
};

void main()
{
    struct Product p1;
    scanf("%d", &p1.id);
    scanf("%d", &p1.quantity);

    scanf("%s", &p1.name);

    scanf("%d", &p1.price);

    printf("%d", p1.id);
    printf("%d", p1.quantity);

    printf("%s", p1.name);

    printf("%d", p1.price);
}