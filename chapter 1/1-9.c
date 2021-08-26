#include <stdio.h>

#define NONBLANK 'nonblank'
//
int main()
{
    int c, prev;

    if ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        }
        if (c == ' ') {
            if (prev != ' ') {
                putchar(c);
            }
        }
        prev = c;
    }
}