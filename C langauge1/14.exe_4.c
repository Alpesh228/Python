#include<stdio.h>
int main()
{
    int num;
    printf("Enter A NUmber");
    scanf("%d",&num);

    if(num>0)
    printf("Positive number");
    else if(num<0)
    printf("Nagtive number");
    else
    printf("Zero");

    return 0;
}