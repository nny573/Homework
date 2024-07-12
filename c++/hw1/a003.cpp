#include <stdio.h>
#include <math.h>

int main()
{
    int M;
    int D;
    int S;
    while (scanf("%d %d", &M, &D) == 2)

    {
        int S = (M * 2 + D) % 3;
        if (S == 0)
        {
            printf("soso");
        }
        else if (S == 1)
        {
            printf("good");
        }
        else
        {
            printf("perfect");
        }
    }
    return 0;
}