#include<stdio.h>

int main(){
    int startVal,endVal;
    printf("Enter the start value: ");
    scanf("%d",&startVal);
    printf("Enter the end value: ");
    scanf("%d",&endVal);
    
    if(startVal<=endVal){
        for(int i=startVal;i<=endVal;i++){
            printf("%d",i);
        }
    }
    else{
        for(int i=startVal;i>=endVal;i--){
            printf("%d",i);
        }
        }
    }
