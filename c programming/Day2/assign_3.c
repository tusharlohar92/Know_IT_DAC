#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter num1: ");
    scanf("%d",&a);

    printf("Enter num2: ");
    scanf("%d",b);

    printf("Enter num3: ");
    scanf("%d",c);

    if(a<b && a<c){
        printf("%d is the smallest number",a);
    }
    else if(b<a && b<c){
        printf("%d is the smallest number",b);
    }
    else{
        printf("%d is the smallest number",c);
    }
}