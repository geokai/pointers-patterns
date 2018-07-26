// x points to y:
// y points to z:
// z = 20:

#include<stdio.h>

int main ()
{
    int z = 20;
    int *x;
    int *y;

    x = &y;
    y = &z;

    printf ("Value of z is: %d\n", *y);
    printf ("Address of z is: %d\n", *x);

    return 0;
}
