// simple incrementing patern 02:

#include<stdio.h>

int main ()
{
    char print = '*';
    int row, col;
    int noOfRows;

    printf ("Enter number of rows to be printed:\n");
    scanf ("%d", &noOfRows);

    int noOfColToPrint = noOfRows;

    printf ("\n");
    for (row=1; row<=noOfRows; row++) {

        for (col=1; col<=noOfColToPrint; col++) {
            printf ("%c", print);
        }
        printf ("\n");
        noOfColToPrint--;

    }
    printf ("\n");

    return 0;
}
