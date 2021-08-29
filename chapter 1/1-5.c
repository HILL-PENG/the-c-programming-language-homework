#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

//int main()
//{
//    float fahr, celsius;
//    int lower, upper, step;
//
//    lower = 0;
//    upper = 300;
//    step = 20;
//
//    fahr = upper;
//    while (fahr >= lower) {
//        celsius = 5.0 / 9.0 * (fahr - 32.0);
//        printf("%3.1f\t%3.1f\n", fahr, celsius);
//        fahr -= step;
//    }
//}

// print Fahrenheit-Celsius table in reverse order
int main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d\t%3.1f\n", fahr, (fahr - 32) * 5.0 / 9.0 );
    }
}