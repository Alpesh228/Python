#include<stdio.h>
int main()
{
    double length,width;
    
    printf("enter length:");
    scanf("%lf",&length);

    printf("enter width:");
    scanf("%lf",&width);

    if(length>width)
    {
        printf("shape is portrait");
    }
    if(width>length)
    {
        printf("shape is landscape");
    }
    if(width==length)
    {
        printf("shape is square");
    }
    
     return 0;
}