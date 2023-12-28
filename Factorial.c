#include <stdio.h>
int fact(int n)
{
    if (n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("%d is the factorial", fact(n));
    return 0;
}
