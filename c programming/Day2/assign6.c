#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(){

    int basicSalary,totalSales;
    float commission, netSalary;
    printf("Enter your basic salary: ");
    scanf("%d",&basicSalary);
    printf("\nEnter your total sales: ");
    scanf("%f",&totalSales);

    

    if(totalSales>=5000 && totalSales<=7000){
        commission = totalSales * .03;
    }
    else if(totalSales>=7001 && totalSales<=10000){
        commission = totalSales * .05;
    }
    else if(totalSales>=10001 && totalSales<=15000){
        commission = totalSales * .10;
    }
    else if(totalSales>=15001){
        commission = totalSales * .15;
    }

    printf("\nBasic salary is %d",&basicSalary);
    netSalary = basicSalary + commission;

    printf("\nCommission is: %f",&commission);
    printf("\nYour net salary is: %f", &netSalary);




}