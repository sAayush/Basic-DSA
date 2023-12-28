#include <stdio.h>
int sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int size, i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int a[size];
    for (i = 0; i < size; i)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a[i]);
    }
    sort(a, size);
    for (i = 0; i < size; i)
    {
        printf("%d ", a[i]);
    }
}