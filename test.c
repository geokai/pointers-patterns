// simple incrementing patern 03:

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<pthread.h>

//void delay (int milliseconds);

char space = '-';
int col1;
int noOfCol = 5;

int main ()
{
    for (col1=1; col1<=noOfCol; col1++) {
        printf ("%c", space);
        fflush(stdout);
        sleep (1);
//        delay (500);
        }
    putchar ('\n');
    return 0;
}
/*
void delay (int milliseconds)
{
    long pause;
    clock_t now, then;

    pause = milliseconds * (CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now - then) < pause )
        now = clock();
}
*/
