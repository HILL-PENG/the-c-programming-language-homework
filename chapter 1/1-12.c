#include <stdio.h>

#define IN 1
#define OUT 0

// print input one word per line
int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                printf("\n"); // finish the word
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN; // beginning of word
            putchar(c);
        } else { // inside a word
            putchar(c);
        }
    }
}


//int main()
//{
//    int c, state;
//
//    state = OUT;
//    while ((c = getchar()) != EOF) {
//        if (c == ' ' || c == '\t' || c == '\n') {
//            printf("\n");
//        } else {
//            putchar(c);
//        }
//    }
//}