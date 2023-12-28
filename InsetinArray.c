#include <stdio.h>
int insert(int arr[], int val, int pos, int size)
{
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
}
int main()
{
    int val, pos;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    val = 69;
    pos = 5;
    insert(arr, val, pos, size);
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}