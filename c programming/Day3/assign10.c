#include<stdio.h>

int main(){
    int num;
    int temp =1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            temp=0;
            break;
        }
    }
    if(temp==1)
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
}