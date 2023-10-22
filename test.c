#include <stdio.h>

int* getDirection(int a)
{
    int *p;
    p = &a;
    return p;
}

int main()
{
    int b = 10;
    printf("%p\n", getDirection(b));
    return 0;
}