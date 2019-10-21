#include <stdio.h>
int partition(int a[], int l, int h);
void quicksort(int a[], int l, int h);
int main()
{
    int i, j, n, a[1000000], s = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quicksort(a, 0, n - 1);
    for (i = 1; i < n; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] < a[i] && a[j] != 0)
            {
                a[j] = 0;
                break;
            }
        }
    }
    for (i = 0; i < n; i++)
        s = s + a[i];
    printf("%d", s);
}
int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l - 1;
    int j = h + 1;
    int temp;
    while (1)
    {
        do
        {
            i++;
        } while (a[i] < pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i >= j)
            return j;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
void quicksort(int a[], int l, int h)
{
    if (l < h)
    {
        int pi = partition(a, l, h);
        quicksort(a, l, pi);
        quicksort(a, pi + 1, h);
    }
}
