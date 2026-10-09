
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age == 0)
    {
        printf("Age is zero");
    }
    else
    {
        printf("Age is non-zero");
    }

    return 0;
}
