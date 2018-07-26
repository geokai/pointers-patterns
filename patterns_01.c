// simple incrementing patern 01:
// draws a left justified right-angled base-down triangle of stars:

#include<stdio.h>
#include<pthread.h>

void delay (int milliseconds);

int main ()
{
    char print = '*';
    int row, col;
    int noOfRows;
    int wait = 500;

    printf ("Enter number of rows to be printed:\n");
    scanf ("%d", &noOfRows);

    printf ("\n");
    for (row=1; row<=noOfRows; row++) {
        for (col=1; col<=row; col++) {
            printf ("%c", print);
            fflush(stdout);
            delay (wait);
        }
        printf ("\r");
        printf ("          ");
        printf ("\r");
        fflush(stdout);
        delay (wait);
    }
    printf ("\n");
    fflush(stdout);
    delay (wait);

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

