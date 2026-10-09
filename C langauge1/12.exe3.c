// input marks and print pass if marks are abouve 35;otherwise print fail

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter Your Marks");
    scanf("%d",&marks);

    if (marks>=35)
    {
        printf("You have passed the exam");

    }
    else
    {
          printf("You have Failed the exam");
    }

    return 0;
}
