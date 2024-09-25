
// №1
/*
#include <stdio.h>
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
*/

//№2
/*
#include <stdio.h>

int main() {
    int a, b, c;

    // Ввод трех отличных друг от друга значений
    printf("Введите три отличных друг от друга значения (a, b, c):\n");
    scanf("%d %d %d", &a, &b, &c);

    // Наименьшее значение
    int min, max;

    // Определение наименьшего и наибольшего значений
    if (a < b && a < c) {
        min = a;
    } else if (b < a && b < c) {
        min = b;
    } else {
        min = c;
    }

    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else {
        max = c;
    }

    // Обмен значений
    if (min == a) {
        if (max == b) {
            b = min;
        } else {
            c = min;
        }
        a = max;
    } else if (min == b) {
        if (max == a) {
            a = min;
        } else {
            c = min;
        }
        b = max;
    } else { // min == c
        if (max == a) {
            a = min;
        } else {
            b = min;
        }
        c = max;
    }

    // Вывод новых значений
    printf("После обмена: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
*/