#include <stdio.h>

int main()
{
    
    for (int c = 0; c < 256; c++)
    {
        printf("%d %c\n", c, (char)c);
    }
    
    return 0;
}