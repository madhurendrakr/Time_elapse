#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key)
{

    if (n == 0)
    {
        return -1;
    }

    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        int mid =h - l/ 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)
            h = mid - 1;

        else
            l = mid + 1;
    }

    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 7, 8, 9, 12, 14, 67, 69, 81};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << " Enter key : " << endl;
    cin >> key;
    int result = binarysearch(arr, size, key);

    cout << result << endl;

    return 0;
}







// #include <iostream>
// using namespace std;

// int binarysearch_by_recursion(int arr[], int key, int l, int r)
// {
//     int mid;
//     if (r = 0)
//     {
//         cout << "empty array" << endl;
//     }
//     else
//     {
//         mid = (l + (r - 1)) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;

//         }
//          else if (arr[mid] < key)
//             {
//                 return binarysearch_by_recursion(arr, key, mid + 1, r);
//             }

//             else
//             {
//                 return binarysearch_by_recursion(arr, key, l, mid - 1);
//             }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cout<<"enter n"<<endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "array elements are :" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     int key;
//     cout<<"enter key"<<endl;
//     cin >> key;

//     cout << binarysearch_by_recursion(arr, key, 0, n) << endl;
//     // cin >> ;
//     return 0;
// }