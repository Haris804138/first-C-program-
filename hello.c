#include <stdio.h>
#include <conio.h>
void main (void)
{
    int a, b, c, d, p;
    float v, w, x, y, z;

    a = 2;
    z = 1.3;
    c = 3;
    d = 3;
    y = 0.3E+1;
    v = a / y;
    w = a / d;
    p = a / d;
    x = (a + c) / (z + 0.3);
    b = d / a + d * a;
    y = a * 2.5 / y;

    clrscr();
    printf("v = %f\n", v);
    printf("w = %f\n", w);
    printf("p = %d\n", p);
    printf("x = %f\n", x);
    printf("b = %d\n", b);
    printf("y = %f\n", y);
    getch();
}