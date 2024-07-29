#include<stdio.h>

int swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a , b ;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d%d",a,b);
}