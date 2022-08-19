#include <stdio.h>

int checkEligible(float); //prototype

int main()
{
    float salaryEmp;
    int eligible;
    printf("Please enter your salary : ");
    scanf("%f", &salaryEmp);
    eligible = checkEligible(salaryEmp); //function call
    if(eligible==1)
        printf("You are eligible!");
    else
        printf("You are not eligible!");
}

// function body
int checkEligible(float salary){
    if(salary>30000.00)
        return 1;
    else
        return 0;
}

/*
Camel Casing
    - hellWorld
    - calculateTotalBill

Underscore Casing
    - hello_world
    - calculate_total_bill

function prototype

function call

return_type function_name (parameters...)
{
    function body
}

*/



