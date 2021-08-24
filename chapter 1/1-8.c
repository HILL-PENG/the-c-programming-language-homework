#include <stdio.h>

int main()
{
    int c, countb, countt, countc;
    countb = 0;
    countt = 0;
    countc = 0;

    while (c = getchar() != EOF)
        if (c == '\b')
            ++countb;
        if (c == '\t')
            ++countt;
        if (c == '\n')
            ++countc;
    printf("%d %d %d\n", countb, countt, countc);
}