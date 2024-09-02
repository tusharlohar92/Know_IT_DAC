#include<stdio.h>

int main(){
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    for(int no=1;no<=100;no++){
        int temp=1;        
        for(int i=2;i<=no;i++){
            if(no%i==0){
                temp=0;
                break;
            }
        }
        if(temp==1 && no!=1){
            printf("\n\tPrime: %d",no);
        }
    }
}