#include <stdio.h>

//int main()
//{
//    int c;
//    while (c = getchar() != EOF)
//        printf("%d\n", c);
//}

//int main()
//{
//    int c = getchar();
//    while (putchar(c) != EOF) {
//        printf("haha\n");
//        c = getchar();
//    }
//}

int main()
{
    int c;
    if (c = getchar() != EOF) {
        printf("equal one\n");
    } else {
        printf("equal zero\n");
    }
}