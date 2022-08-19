#include <stdio.h>

// Structures in C

struct employee {
    char empName[50];
    int empAge;
    char empGender;
    float empSalary;
};


int main()
{
    //struct employee emp[100];
    
    struct employee john = {"John", 50, 'M', 75999.00};
    // john.empName = "John";
    // john.empAge = 50;
    // john.empGender = 'M';
    // john.empSalary = 75999.00;
    printf("These details belong to : %s ", john.empName);
}
