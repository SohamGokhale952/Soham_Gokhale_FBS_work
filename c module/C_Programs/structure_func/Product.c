#include <stdio.h>
struct Product
{
    int id;
    int quantity;
    char name[20];
    int price;
};
struct Product getproduct();

void main()
{
    struct Product p1;

    p1 = getproduct();
    printf("%d", p1.id);
    printf("%d", p1.quantity);

    printf("%s", p1.name);

    printf("%d", p1.price);
}

struct Product getproduct()
{
    struct Product p1;

    scanf("%d", &p1.id);
    scanf("%d", &p1.quantity);

    scanf("%s", &p1.name);

    scanf("%d", &p1.price);
    return p1;
}