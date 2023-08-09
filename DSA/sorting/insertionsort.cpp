#include <iostream>
using namespace std;

void insertionsort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];

        int j = i - 1;
        while (key < arr[j] && j >= 0)
        {

            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Sorted array: " << endl;
    insertionsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}