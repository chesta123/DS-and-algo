#include <stdio.h>
int i, j, n, arr[1000];
int flip(int arr[], int n)
{
    int x = arr[n - 1];
    for (j = 0; j < n - 1; j++)
        arr[j + 1] = arr[j];
    arr[0] = x;
    return arr[j];
}

int main()
{
    printf("enter the number of elements in array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        flip(arr, n);
    int sum = i * arr[i];
    printf("%d", sum);
    return 0;
}