#include <stdio.h>
#include <math.h>

int main()
{
    int year;
    while (scanf("%d", &year) == 1)
    {
        if (year / 400 == 0)
        {
            printf("閏年");
        }
        else if (year / 100 == 0 && year / 4 == 0)
        {
            printf("閏年");
        }
        else
        {
            printf("平年");
        }
    }
    return 0;
}