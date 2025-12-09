#include<stdio.h>

int main(){
    float price1,price2,price3;
    printf("price 1 :");
    scanf("%f",&price1);
    printf("%s%4.2f\n","discount 5% :",(price1)*0.95);
    printf("price 2 :");
    scanf("%f",&price2);
    printf("%s%4.2f\n","discount 15% :",(price1+price2)*0.85);
    printf("price 3 :");
    scanf("%f",&price3);
    printf("%s%4.2f","discount 30% :",(price1+price2+price3)*0.70);
}
