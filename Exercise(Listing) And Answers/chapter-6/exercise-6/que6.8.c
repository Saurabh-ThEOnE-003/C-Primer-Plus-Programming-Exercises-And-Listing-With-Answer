/*Modify exercise 7 so that it uses a function to return the value of the calculation*/

#include<stdio.h>
double difference(float n, float m);
int main(void)
{
    float upper,lower;
    float diff, product;
    int count;
    printf("Enter two floating-point number:");
    while (scanf("%f %f", &upper, &lower) == 2)
    {
        // product = upper * lower;
        // diff = (upper - lower)/product;
        // printf("Differen divided by product is: %f\n", diff);
        // printf("Enter two floating-point number:");
        printf("Differen divided by product is: %f\n", difference(upper, lower));
        printf("Enter two floating-point number:");
    }
    printf("Exiting--->>");

    return 0;
}
double difference(float n, float m)
{
    float diff, product, answer;
    diff = n - m;
    product = n * m;
    answer = diff / product;

    return answer;
}