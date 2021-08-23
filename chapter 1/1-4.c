#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while (fahr <= upper) {
        fahr = 9.0 * celsius / 5.0 + 32.0;
        printf("%3.1f\t%3.1f\n", celsius, fahr);
        celsius += step;
    }
}