#include <stdio.h>
int find(int arr[], int val, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
            return i;
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int val;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter value you want to find: ");
    scanf("%d", &val);
    int pos = find(arr, val, size);

    if (pos > 0)
    {
        printf("location: %d", pos);
    }
    else
    {
        printf("Value not found");
    }
}