#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int num;
    cout << "Enter number of element in array" << endl;
    cin >> num;
    int arr[num];

    cout << "Enter element in array" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter element to found" << endl;
    cin >> key;
    int result = linearsearch(arr, size, key);

    cout << "return type :" << result << endl;
    if (result == 0)
    {
        cout << "Empty Array" << endl;
        return 0;
    }

    else if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index :" << result << endl;
    }

    return 0;
}