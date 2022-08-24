#include <stdio.h>

int main()
{
    int age = 50;
    // *p is same as age
    int *p = &age;
    printf("%d", *(p+15));
    
    int numArray[] = {1,2,3,4,5};
    int *q = numArray;
    printf("%d", *(q+2));
}
