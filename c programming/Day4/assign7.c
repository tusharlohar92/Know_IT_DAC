#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=1;i<=num;i++){
        for(int j=1;j<=10;j++){
            printf("%d",j*num);
            printf("\n");
        }
    }
    
    return 0;
}