#include <stdio.h>

/*01 所以用二進為法 例如0~9
0| 000
1| 001
2| 010
3| 011
4| 100
5| 101
6| 110
7| 111
8| 1000
9| 1001
浮點數是算不準的
字串是字元的集合
unsigned他沒有表示負數會比一般範圍大一倍
shift 反白
control+D 在相同的地方插入游標
alt+shift+f 排版
if 小括號 不用分號 是一個statement才需要分號
*/

int main()
{
    int a = 10;               // 整數
    float b = 3.14;           // 浮點數
    double c = 6.28931;       // 雙精度浮點數
    char d = 'x';             // 字元
    char e[10] = "123456789"; // 字串 字串是字元的陣列

    printf("short size: %d", sizeof(short));
    printf("\n");
    printf("int size: %d", sizeof(int));
    printf("\n");
    printf("unsigned int size: %d ", sizeof(unsigned int));
    printf("\n");
    printf("long int size: %d ", sizeof(long int));
    printf("\n");
    printf("unsigned long int: %d", sizeof(unsigned long int));
    printf("\n");

    return 0;
}