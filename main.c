#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    double c = b;
    double sum;
    while(c>1)
        c = c/10.0;
    sum = (double)a+ c;
    printf("%f\n", sum);
    return 0;
}

