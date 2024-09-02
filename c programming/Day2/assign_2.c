#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){

    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);

    printf("Enter number 2: ");
    scanf("%d",&b);

    if(a>b){
        printf("a is bigger than b");
        
    }
    else {
        printf("b is bigger than a");
    }

}