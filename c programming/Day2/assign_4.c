#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){
    char input_char;
    printf("Enter a character value: ");
    scanf("%c",&input_char);
    if ((input_char >= 65 && input_char <= 90) || (input_char >= 97 && input_char <= 122)){
        printf("The character is a alphabet\n");
    }
}