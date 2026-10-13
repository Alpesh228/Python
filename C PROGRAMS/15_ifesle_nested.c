#include<stdio.h>
int main()
{
    int number;
    printf("Enter The Number");
    scanf("%d",&number);

    if(number>=0)
    {
        if(number==0)
        {
            printf("Number is zero");
    
        }
        else
        {
            printf("Number is positive");
        }
    }
    else
    {
        printf("Number is nagaive");
    }
    return 0;
}
// Write a program to Compare 3 values and decide which one is biggest 