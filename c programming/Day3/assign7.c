#include<stdio.h>

int main(){
    int no,fact=1;
    printf("Enter a number: ");
    scanf("%d",&no);
    for(int i=1;i<=no;i++){
        fact=fact*i;
        
    }
    printf("factorial = %d ",fact);
    return 0;
    
}