// Access elements of the array using pointers:

#include<stdio.h>

int main ()
{
    int arr[5]={9,1,4,2,6};
    int *ptr = arr;
    int *x;

    x = &ptr;

    int i;
    for (i=0 ; i < 5 ; i++) {
        printf ("%d th element is : %d\n", i, *ptr);
        ptr++;
    }
    printf ("the address of the first element is : %d\n", *x);

    return 0;
}
