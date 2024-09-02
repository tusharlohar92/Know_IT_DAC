#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1;i<=10;i++){
        printf("\n\n\t %d x %d = %d",num,i,num*i);
    }
}