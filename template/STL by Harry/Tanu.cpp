#include <iostream>
using namespace std;
void merge(int *arr, int lb, int mid, int ub)
{
    cout << "hii2\n";
    int i, j, k, b[lb + ub];
    i = lb;
    j = mid + 1;
    k = lb;
    while (i <= mid && j <= ub)
    {
        cout << "hii4\n";
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    if (i > mid)
    {
        cout << "hii3\n";
        while (j <= ub)
            // ;
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        cout << "hii5\n";
        while (i <= mid)
            // ;
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for (int i = lb; i <= ub; i++)
    {
        arr[i] = b[i];
    }
}
void mergesort(int *arr, int lb, int ub)
{
    cout << "hii\n";
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}
int main()
{
    int arr[50], i, j, n;
    cout << "Enter the size of the element";
    cin >> n;
    cout << "Enter the element you want to insert";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n - 1);
    cout << "After the sorting:";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}