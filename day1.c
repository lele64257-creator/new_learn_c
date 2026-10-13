#include<stdio.h>
int square(int x)
{
    return x * x;
}
void prinTable(int n)
{
    for (int i = 1; i <= 9; i++)
        printf("%d * %d = %d " , i, n, i * n);
}
int main(void)
{
    int a = square(5);
    printf("%d\n",a);
    prinTable(6);

    return 0;

}