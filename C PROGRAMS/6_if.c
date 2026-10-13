#include <stdio.h>

int main()
{
    double number, cube;

    printf("Enter number: ");
    scanf("%lf", &number);

    if (number < 0)
    {
        number = -number;
        printf("Number was negative, so converted to positive.\n");
    }

    cube = number * number * number;

    printf("Cube: %lf\n", cube);

    return 0;
}