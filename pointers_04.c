// pointers and arrays:

#include<stdio.h>

int main ()
{
    int arr[]={1,4,2,5,2,0};
    int i;

    for (i=0;i<6;i++) {
        printf ("%d    ", *(arr+i));
    }
    printf ("\n");
    return 0;
}
