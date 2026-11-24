#include <stdio.h>

void func(int v, int *q);

int main()
{
    int x = 0, y = 0;
    int *p;

    p = &x;
    // (1), diagram-A
    (*p)++;
    // (2)
    func(x, p);
    // (6)
    func(x, &y);
    // (10)

    return(0);
}

void func(int v, int *q)
{
    // (3), (7), diagram-B
    v++;
    // (4), (8)
    (*q)++;
    // (5), (9)
}