#include <stdio.h>
void store(int *, int);
void disp(int *, int);
void replace(int *, int, int, int);

void main()
{
    int arr[10];
    int new = 7;
    int old = 5;
    printf("enter the array");
    store(arr, 10);
    disp(arr, 10);
    replace(arr, 10, new, old);
    disp(arr, 10);
}

void store(int *ptr, int size)
{

    for (int i = 0; i < size; i++)
    {
        /* code */
        scanf("%d", &ptr[i]);
    }
}
void disp(int *ptr, int size)
{

    for (int i = 0; i < size; i++)
    {
        /* code */
        printf("%d ", ptr[i]);
    }

    printf("\n");
}

void replace(int *ptr, int size, int new, int old)
{

    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == old)
        {
            ptr[i] = new;
        }
    }

    
}