#include <stdio.h>

int main() {
    int z = 2;
    int *p = &z;
    int **q = &p;
    int ***r = &q;
    printf("%d\n", *p);   // Value at p, especifically z
    printf("%p\n", *q);   // Address of z
    printf("%d\n", *(*q));   // Value of p
    printf("%p\n", *(*r));   // Address of z
    printf("%d\n", ***r);   // Value of p
    printf("%p\n", r);    // Address of q
    printf("%p\n", q);   // Address of p
    printf("%p\n", p);     // Address of z
    printf("%p\n", &r);   // Address of r
    return 0;
}
