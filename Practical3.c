#include <stdio.h>

void call_by_value(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("Inside function: a = %d b = %d\n", x, y);
}

int main()
{
    int a = 10, b = 20;

    printf("Before function: a = %d b = %d\n", a, b);

    call_by_value(a, b);

    printf("After function: a = %d b = %d\n", a, b);

    return 0;
}
