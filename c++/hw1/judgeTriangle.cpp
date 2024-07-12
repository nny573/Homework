#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int c = 5;
    printf("please input triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c&&b+c>a&&a+c>b)
    {
        printf("is a triangle");
    }
    else 
    {
        printf("not a triangle");
    }
    
    return 0;
}