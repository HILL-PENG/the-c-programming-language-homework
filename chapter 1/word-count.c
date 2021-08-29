#include <stdio.h>

// define if head in one word
#define IN 1
#define OUT 0

int main()
{
    int c,lineCount, wordCount, charCount, state;

    state = OUT;
    lineCount = wordCount = charCount = 0;
    while ((c = getchar()) != EOF) {
        ++charCount;
        if (c == '\n')
            ++lineCount;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++wordCount;
        }
        printf("lineCount:%d, wordCount:%d, charCount:%d \n", lineCount, wordCount, charCount);
    }
}

//int main()
//{
//    int c, nl, nw, nc, state;
//
//    state = OUT;
//    nl = nw = nc = 0;
//    while ((c = getchar()) != EOF) {
//        ++nc;
//        if (c == '\n')
//            ++nl;
//        if (c == ' ' || c == '\n' || c == '\t')
//            state = OUT;
//        else if (state == OUT) {
//            state = IN;
//            ++nw;
//        }
//        printf("%d %d %d\n", nl, nw, nc);
//    }
//}

