#include <stdio.h>
#include <math.h>

int main()
{
    printf("What is your height?\n");
    float height = 175.0f;
    scanf("%f", &height);
    printf("What is your weight?\n");
    float weight = 55.0f;
    scanf("%f", &weight);
    float bmi = weight / pow(height / 100.0f, 2.0f);
    printf("bmi %f\n", bmi);
    if (18.5 < bmi && bmi < 22)
    {
        printf("you are normal weight");
    }
    else if (bmi < 18.5)
    {
        printf("you are tooo thin");
    }
    else
    {
        printf("you are so fAT");
    }

    return 0;
}