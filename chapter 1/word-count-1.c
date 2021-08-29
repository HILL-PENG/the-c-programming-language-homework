#include <stdio.h>

// count each digit number, blanks and other chars
int main()
{
    int c, i, countBlank, countOther;
    int countDigit[10];

    countBlank = countOther = 0;
    for (int i = 0; i < 10; ++i) {
        countDigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            ++countBlank;
        } else if (c >= 0 && c <= 9) {
            ++countDigit[c - 0];
        } else {
            ++countOther;
        }
    }

    printf("countDigit:");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", countDigit[i]);
    }
    printf("countBlank:%d countOther:%d", countBlank, countOther);
}