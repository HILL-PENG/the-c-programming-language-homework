#include <stdio.h>

#define NONBLANK 'nonblank'
// replace string of blanks with a single blank
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