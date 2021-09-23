#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    double b = 805.0;
    double sum;
    while(b>1)
        b = b/10.0;
    sum = (double)a+ b;
    printf("%f\n", sum);
    return 0;
}

