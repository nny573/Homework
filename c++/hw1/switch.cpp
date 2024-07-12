#include <stdio.h>

int main()
{
    char c = 'b';
    switch (c)
    {
    case 'a':
        printf("is a");
        break;
    case 'b':
        printf("is b");
        break;
    default:
        printf("not anyone of above");
        break;
    }
    return 0;
}