#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks");
    scanf("%d",&marks);

    if(marks>=90)
    printf("Grade A");
    else if(marks>=80)
    printf("Grade B");
    else if(marks>=70)
    printf("Grade B");
    else if(marks>=60)
    printf("Grade B");
    else 
    printf("Grade F");

    return 0;
}