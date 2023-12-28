#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return -1;
}

int main(void)
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int x;
    printf("Enter the Number you want to find");
    scanf("%d", &x);
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);
    return 0;
}
