#include <stdio.h>

long long summation(int a[], int n, int idx)
{
    if (idx == n)
        return 0;
    return a[idx] + summation(a, n, idx + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%lld\n", summation(a, n, 0));
    return 0;
}
