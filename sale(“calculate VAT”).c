#include<stdio.h>

int main(){
    float n1,n2,n3;
    scanf("%f%f%f",&n1,&n2,&n3);
    float d1=n1*0.95,d2=(n1+n2)*0.85,d3=(n1+n2+n3)*0.70;
    printf("%4.2f\n",d1*1.07);
    printf("%4.2f\n",d2*1.07);
    printf("%4.2f",d3*1.07);
}
