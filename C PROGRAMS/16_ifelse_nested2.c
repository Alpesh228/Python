#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    
    if (a==b && b==c && a==c)
    
       printf("ALL Values Are  SaME ");

       else if(a>b)
       {
        if (a>c)
        
        printf("%d is gretest number",a);
       
       else
       
        printf("%d is gretest number",c);
       
       }

    else
    {
        if (b>c)
        {
            printf("%d is gretest number",b);
        }
        else
        {
            printf("%d is gretst number ",c);
        }
        
    }


    return 0;
    
}
