#include <stdio.h>

int main(void)
{
    int i, sum = 0, m, n = 0;

    printf("Enter a natural number less than or equal to 20: ");
    fflush(stdout);
    scanf("%d", &m);

    if ((m <= 0) || (m > 20)) {
        printf("Input error.\n");
        return (-1);
    }

    n = ++m;
    n = m++;

    for (i = 0; i <= n; i++) {
        if ((i % 2) == 0) {
            continue;
        }
        sum += i;
        if ((sum % 5) == 0) {
            break;
        }
    }

    printf("The sum of all the odd numbers from 1 to %d is %d.\n", n, sum);

    return (0);
}