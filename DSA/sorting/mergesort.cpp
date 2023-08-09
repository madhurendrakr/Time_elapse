#include <iostream>
using namespace std;

void merge(int arr[], int si, int mid, int ei)
{
    int *merge = new int[ei - si + 1];
    int x = 0;
    int idx1 = si;
    int idx2 = mid + 1;
    while (idx1 <= mid && idx2 <= ei)
    {
        if (arr[idx1] <= arr[idx2])
            merge[x++] = arr[idx1++];

        else
            merge[x++] = arr[idx2++];
    }

    while (arr[idx1] <= mid)
    {
        merge[x++] = arr[idx1++];
    }
    while (arr[idx2] <= ei)
    {
        merge[x++] = arr[idx2++];
    }
}
void mergesort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + (ei - si)) / 2;
    mergesort(arr, si, mid);
    mergesort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

// cout << "hii";
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {3, 8, 4, 1, 9, 4, 3, 7, 5};

    int size = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, size - 1);
    cout << "sorted arry is :" << endl;
    printarr(arr, size);

    return 0;
}