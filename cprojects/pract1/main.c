#include <stdio.h>

// №1
int main()
{
    double x, y, f1, f2;
    printf("x=");
    scanf("%lf", &x);
    printf("y=");
    scanf("%lf", &y);

    //  а)
    if ((x > y) && (y >= -5))
    {
        f1 = x;
        printf("");
    }
    else if (y < -5)
    {
        f1 = x * y;
    }
    else
    {
        f1 = 5 * x;
    }
    printf("f1=%lf\n", f1);
    // б)
    f2 = ((x > y) && (y >= -5)) ? x : y < -5 ? x * y : 5 * x;
    printf("f2=%lf\n", f2);
}