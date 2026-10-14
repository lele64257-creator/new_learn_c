#include<stdio.h>

int max3(int a, int b, int c)
{
    if (a > b)
        return a > c ? a : c;
    else
        return b > c ? b : c;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n-1 ;i++)
        if (n % i == 0)
            return 0;
            return 1;

}
int main(void)
{
    printf("%d\n", max3(10, 20, 30));
    for (int i = 1; i <= 50; i++)
        if (isPrime(i) == 1)
            printf("%d\n", i);
    return 0;
}
