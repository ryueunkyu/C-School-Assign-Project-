#include <stdio.h>

void main ()
{
    const int value = 10;
    int num;

    printf("Input a number: ");
    scanf("%d",&num);

    // increment by 1
    printf("\n%d\n", value + num);
    printf("%d\n", value + num + 1);

    // decrement by 1
    printf("%d\n", value * num);
    printf("%d\n",value * num - 1);

    printf("%d\n", value / num);
    printf("%d\n", num - value);

    // increment by 2
    printf("%.1f\n", (value + num) / 2.0);
    printf("%.1f", (value + num + 2) / 2.0);

    return 0;
}
