#include<stdio.h>
int square(int x)
{
    return x * x;
}
void printTable(int n)
{
    for (int i = 1; i <= 9; i++)
        printf("%d * %d = %d " , i, n, i * n);
}
void stars(int n)
{
    for (int i = 1; i <= n; i++)
        printf("*");
    printf("\n");
}
int main(void)
{
    int a = square(5);
    printf("%d\n",a);
    printTable(7);
    printTable(9);
    printf("\n");
    for (int i = 1; i <= 5; i++)
        stars(i);

    return 0;

}