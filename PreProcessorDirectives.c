// Pre Processor Directives

#include <stdio.h>

#define MAINTENANCE_AMOUNT 2000
#define ADD_MAINTENANCE(rent) (rent + 1000)

#if MAINTENANCE_AMOUNT == 1000
    #define TAX 10
#else
    #define TAX 20
#endif

int main()
{
    
    int rent = 25000;
    // printf("Your total is : %d", ADD_MAINTENANCE(rent));
    printf("%d", TAX);
}
