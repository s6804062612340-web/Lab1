#include<stdio.h>

int main(){
    float price1,price2,price3;
    printf("ราคาสินค้าชิ้นที่ 1 :");
    scanf("%f",&price1);
    printf("%s%4.2f\n","รับส่วนลด 5% :",(price1)*0.95);
    printf("ราคาสินค้าชิ้นที่ 2 :");
    scanf("%f",&price2);
    printf("%s%4.2f\n","รับส่วนลด 15% :",(price1+price2)*0.85);
    printf("ราคาสินค้าชิ้นที่ 3 :");
    scanf("%f",&price3);
    printf("%s%4.2f","รับส่วนลด 30% :",(price1+price2+price3)*0.70);
}
