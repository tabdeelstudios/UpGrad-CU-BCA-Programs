#include <stdio.h>

int main()
{
    //Bitwise Operators
    
    // int -> 4 bytes = 4*8 = 32 bits
    
    // 00000001 = 1 x 2^0 = 1
    // 00000010 = 0 x 2^0 + 1 x 2^1 = 2
    // 00000011 = 1 x 2^1 + 1 x 2^1 = 1 + 2 = 3
    
    //   00000001
    // + 00000011
    //       11
    // -----------
    //  00000100
    //Binary - 2 values
    
    //   01100001
    // + 01100010
    // -----------
    //   01100011    
    
    char a = 'a';
    char b = 'c';
    printf("%c\n", a&b);
    printf("%c\n", a|b);
    printf("%d\n", a<<4);
    printf("%d\n", a>>4);
}
