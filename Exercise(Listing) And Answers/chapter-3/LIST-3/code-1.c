#include<stdio.h>
int main(){
    int inch;
    float convert;
    printf("Enter Value in Inches = ");
    scanf("%d",&inch);
    convert = inch * 2.54;
    printf("In cm = %f",convert);

    return 0;
}