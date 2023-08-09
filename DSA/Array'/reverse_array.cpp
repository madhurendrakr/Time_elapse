#include <bits/stdc++.h>
#include "reverse_arr.h"
using namespace std;

// void reverse(int arr[],int low,int end){
// while(low<end){
//     int temp=arr[low];
//     arr[low]=arr[end];
//     arr[end]=temp;
//     low=low+1 ;
//     end=end-1;

//      }

//      return ;
// }

void printarray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 1, 9, 5, 6, 3, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "array before reversing : " << endl;
    printarray(arr, n);
    reverse(arr,0,n-1);
    cout << endl;
    cout << "array After reversing : " << endl;
    printarray(arr, n);

    return 0;
}