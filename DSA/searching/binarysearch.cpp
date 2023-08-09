#include <iostream>
using namespace std;

int binarysearch(float arr[],int l, int num, float key)
{
    if (num==0)
    {
       cout<<"empty array"<<endl;
       return 0; 
    }
    
  
    
    while (l<= num)
    {
          int mid=(l+(num-l))/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            num= mid - 1;
        }
        else
        {
            l = mid + 1;
        }
       
    }

    return -1 ;
    
}

int main()
{
    int num;
    cout << "Enter size of array :" << endl;
    cin >> num;
    float arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elemens are :" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    int key;
    cout<<"\n\n******************"<<endl;
    cout<<"Enter element to find :"<<endl;
    cin>>key;
    int result=binarysearch(arr,0,num,key) ;

    cout << "return index :" << result << endl;
   

     if (result == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index :" << result << endl;
    }

    return 0;
}