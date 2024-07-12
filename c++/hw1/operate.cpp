#include <stdio.h>

void calMoney()
{
    float money = 100.0f;
    float rate = 0.02f;
    for (int i = 1; i <= 10; i++)
    {
        money = money * (1 + rate);
        printf("%f \n", money);
    }
}

void printStars()
{
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

void getSum() {
    int sum = 0;

    for (size_t i = 0; i < 100; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}
int main()
{
    printStars();
}

