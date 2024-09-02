#include<stdio.h>

int main(){
    int m,n;
    scanf("enter num1 and num2: %d %d",&m,&n);
    for(int i=m;i<n;i++){
        printf("%d to %d",m,n);
        i++;
    }
    return 0;

}