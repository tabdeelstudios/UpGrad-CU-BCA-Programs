#include <stdio.h>

int main()
{
    // int - 4 bytes 
    // char - 1 byte 
    // float - 4 bytes
    // double - 8 bytes
    // void
    
    // Data Type Modifiers
        // short - 2 bytes
        // long - 8 bytes
        // signed
        // unsigned
        
    // Array
    
    // int salary[6];
    // //salary[0], salary[1], salary[2], salary[3], salary[4], salary[5]
    
    // int i;
    // printf("Enter the salary of 6 employess\n");
   
    // for(i=0;i<6;i++)
    // {
    //     printf("Enter salary for Employee No %d : ", i+1);
    //     scanf("%d", &salary[i]);
    // }
    
    // // Add Rs.5000 to every salary
    // for(i=0;i<6;i++)
    // {
    //     salary[i] = salary[i]+5000;
    // }
    
    // printf("--------------\nHere's what you entered\n");
    // for(i=0;i<6;i++)
    // {
    //     printf("Salary for Employee No %d : ", i+1);
    //     printf("%d \n", salary[i]);
    // }
    
    /*
    student 1 - age, email, grade, address, phone
    student 2 - age, email, grade, address, phone
    student 3 - age, email, grade, address, phone
    student 4 - age, email, grade, address, phone
    student 5 - age, email, grade, address, phone
    */
    
    /*
    
    0 -> 0,1,2,3,4
    
    1 -> 0,1,2,3,4
    
    2 -> 0,1,2,3,4
    
    */
    
    int data[3][5];
    int i,j;

    printf("Enter the data : \n");
    for(i=0;i<3;i++)
    {
        printf("\nEnter the data for object %d: \n", i);
        for(j=0;j<5;j++)
        {
            printf("\tEnter the %d data : ", j);
            scanf("%d", &data[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        printf("\nData for object %d: \n", i);
        for(j=0;j<5;j++)
        {
            printf("\tData %d : %d",j, data[i][j]);
        }
    }
       
}






