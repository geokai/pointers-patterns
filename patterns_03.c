// simple incrementing patern 03:
// draws a right justified right-angled base-down triangle of stars:

#include<stdio.h>
#include<stdlib.h>
//#include<unistd.h>
//#include<time.h>
#include<pthread.h>

void delay (int milliseconds);

//#define DELAY 1

int main ()
{
    char star = '*';
    char space = '-';
    int row;
    int col1, col2;
    int noOfRows, noOfCol;
    int wait = 500;

    printf ("Enter number of rows to be printed:\n");
    scanf ("%d", &noOfRows);

    noOfCol = noOfRows-1;

    printf ("\n");
    for (row=1; row<=noOfRows; row++) {
        for (col1=1; col1<=noOfCol; col1++) {
            printf ("%c", space);
            fflush(stdout);
            delay (wait);
        }
        noOfCol--;
        for (col2=1; col2<=row; col2++) {
            printf ("%c", star);
            fflush(stdout);
            delay (wait);
        }
        printf ("\n");
            fflush(stdout);
            delay (wait);

    }
    printf ("\n");

    return 0;
}


void delay (int milliseconds)
{
    long pause;
    clock_t now, then;

    pause = milliseconds * (CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now - then) < pause )
        now = clock();
}

