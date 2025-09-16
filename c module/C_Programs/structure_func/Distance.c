#include <stdio.h>
struct Distance
{
    int feet;
    int inch;
};
struct Distance getdistance();

void main()
{

    struct Distance d1, d2;

   d1= getdistance();
   
    printf("%d",d1.feet);
    printf("%d",d1.inch);

}

struct Distance getdistance()
{
    struct Distance d1;

    scanf("%d", &d1.feet);
    scanf("%d", &d1.inch);
    return d1;
}