#include <stdio.h>
struct complex
{
    int real;
    int imag;
};
struct complex getcomp();
void main()
{

    struct complex d1;

  struct complex e1= getcomp();
    printf("%d + %d i", e1.real, e1.imag);
}

struct complex getcomp()
{
    struct complex d1;

    scanf("%d", &d1.real);
    scanf("%d", &d1.imag);

    return d1;
}