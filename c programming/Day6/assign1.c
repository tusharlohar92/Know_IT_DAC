#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if (strcmp(str1, str2) == 0){
        printf("Both strings are equal.\n");
    }
    else{
        printf("Both strings are not equal.\n");
    return 0;
    }
}