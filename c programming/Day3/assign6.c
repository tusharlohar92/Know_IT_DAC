#include<stdio.h>

int main(){
    int num;
    int count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num>0)
    {
        count++;
        num = num/10;
        
    }
    printf("Number of digits in a number are: %d ",count);   
    return 0;
     
    
}