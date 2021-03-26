#include <stdio.h>

int calculate(int num);

int main(int argc, const char* argv[])
{
    int start, end, i, j, k;
    int result[98];
    printf("Enter a starting point:\n");
    scanf("%d", &start);
    if (start < 2 || start > 99)
    {
        printf("Enter a valid starting point (from 2 - 99):\n");
    }
    printf("Enter an ending point:\n");
    scanf("%d", &end);
    if (end <= start || end > 999) {
        printf("Enter a valid ending point (from %d - 999)", start + 1);
    }
    for (i = 0, j = start; j <= end; i++, j++)
    {
        result[i] = calculate(j);
    }
    for (i = 0, j = start, k = 0; j <= end; i++, j++) {
        printf("%5d:%-5d", j, result[i]);
        k++;
        if (k == 7)
        {
            k = 0;
            printf("\n");
        }
    }
    return 0;
}

int calculate(int num)
{
    int i = 0;
    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
        }
        else {
            num = (3 * num) + 1;
        }
        i++;
    }
    return i;
}
