#include<stdio.h>

int main(){
    int fact =1;
    for(int i=1;i<=5;i++){
        fact=fact*i;
    }
    printf("factorial of numbers between 1 to 5 are %d",fact);
}