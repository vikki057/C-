#include<stdio.h>

int power(int *a , int *b){
    int pow=1;
    for(int i=1;i<=*b;i++){
        pow = *a * pow;
    }
    return pow;
}

int main(){
    int a , b , p;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    p = power(&a,&b);
    printf("%d",p);
    return 0;
}