// pointers and strings:
// trying func strstr and strchr

#include<stdio.h>
#include<string.h>

int main ()
{
    char s1[]="Hey, how r u??\n";
    char s2[]="how r u??\n";
    char c = 'w';

    char *ptr = strchr (s1,c);
    printf ("%s", ptr);

    char *p = strstr (s1,s2);
    printf ("%s\n",p);

    return 0;
}
