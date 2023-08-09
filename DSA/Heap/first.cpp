#include <bits/stdc++.h>
using namespace std;

int left(int i)
{
    return 2 * i + 1;
}

int right(int i)
{
    return 2 * i + 2;
}
void min_heapify(int arr[], int size, int i)
{
    int lt = left(i);
    int rt = right(i);
    int smallest = i;
    if (lt < size && arr[smallest] > arr[lt])
        smallest = lt;

    if (rt < size && arr[smallest] > arr[rt])
        smallest = rt;

    if (smallest != i)
    {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}


void build_heap(int arr[], int size)
{
    int h = size - 1;
    for (int i = (size-2)/2; i>0; i--)
    {
        min_heapify( arr, size, i);
    }

    // heapify(arr,size,0);
    
}

void print(int arr[],int size){
for (int i = 0; i <size; i++)
{
   cout<<arr[i]<<" ";
}

}
int main()
{
    int arr[] = {56, 21, 81, 104, 44, 2, 23, 61, 70, 99};
       int size=sizeof(arr)/sizeof(arr[0]);
cout<<"Array before heapify :"<<endl;
print( arr, size);
build_heap(arr,size);
cout<<endl<<endl;

cout<<"Array before heapify :"<<endl;
print( arr, size);


    return 0;
}