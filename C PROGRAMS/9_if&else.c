
#include <stdio.h>

int main()
{
    float price1, price2, weight1, weight2;
    float price_per_gram1, price_per_gram2;

    printf("Enter 1st product price: ");
    scanf("%f", &price1);

    printf("Enter 1st product weight: ");
    scanf("%f", &weight1);

    printf("Enter 2nd product price: ");
    scanf("%f", &price2);

    printf("Enter 2nd product weight: ");
    scanf("%f", &weight2);

    if (price1 <= 0 || price2 <= 0 ||
        weight1 <= 0 || weight2 <= 0)
    {
        printf("Price and weight must be positive.");
    }
    else
    {
        price_per_gram1 = price1 / weight1;
        price_per_gram2 = price2 / weight2;

        printf("Product 1 price per gram: %f\n", price_per_gram1);
        printf("Product 2 price per gram: %f\n", price_per_gram2);

        if (price_per_gram1 < price_per_gram2)
        {
            printf("Product 1 is cheaper.");
        }
        else if (price_per_gram1 > price_per_gram2)
        {
            printf("Product 2 is cheaper.");
        }
        else
        {
            printf("Both products have the same price per gram.");
        }
    }

    return 0;
}
