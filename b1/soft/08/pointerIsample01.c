#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    int *p;
    
    p = &x;
    // (1), diagram
    printf("x = %p, y = %p\n", (void *)&x, (void *)&y);
    printf("p = %p\n", (void *)p);
    printf("\n");

    x++;
    // (2)
    printf("x = %p, y = %p\n", (void *)&x, (void *)&y);
    printf("p = %p\n", (void *)p);
    printf("\n");

    y++;
    // (3)
    printf("x = %p, y = %p\n", (void *)&x, (void *)&y);
    printf("p = %p\n", (void *)p);
    printf("\n");

    (*p)++;
    // (4)
    printf("x = %p, y = %p\n", (void *)&x, (void *)&y);
    printf("p = %p\n", (void *)p);
    printf("\n");

    p = &y;
    // (5)
    printf("x = %p, y = %p\n", (void *)&x, (void *)&y);
    printf("p = %p\n", (void *)p);
    printf("\n");
    x++;
    // (6)
    printf("x = %p, y = %p\n", (void *)&x, (void *)&y);
    printf("p = %p\n", (void *)p);
    printf("\n");

    y++;
    // (7)
    printf("x = %p, y = %p\n", (void *)&x, (void *)&y);
    printf("p = %p\n", (void *)p);
    printf("\n");

    (*p)++;
    // (8)
    printf("x = %p, y = %p\n", (void *)&x, (void *)&y);
    printf("p = %p\n", (void *)p);
    printf("\n");

    return(0);
}