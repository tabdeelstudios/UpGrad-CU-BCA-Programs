#include <stdio.h>
#include <string.h>

int main()
{
    // Strings -> character arrays
    char ch;
    int i=0;
    char name[50];
    printf("Enter your name : ");
    scanf("%s", name);
    
    printf("%d", strlen(name));
    
    //printf("\nHi %s", name);
    
    // while(name[i]!='\0')
    // {
    //     printf("%c\n", name[i]);
    //     i++;
    // }
    
    // for(i=0;i<50;i++)
    // {
    //     printf("%c\n", name[i]);
    // }
    
    // null character - '\0'
}
