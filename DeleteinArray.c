#include <stdio.h>

void deleteElement(int arr[], int n, int x)
{
    for (int j = x; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    deleteElement(arr, n, x);
    n--;

    printf("Modified array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
