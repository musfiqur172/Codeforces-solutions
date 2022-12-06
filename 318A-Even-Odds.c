#include <stdio.h>

int main()
{
    long long int k, n;
    scanf("%lld %lld", &n, &k);
    printf("%lld", k <= (n / 2 + n % 2) ? 2 * k - 1 : (k - (n / 2 + n % 2)) * 2);
    return 0;
}