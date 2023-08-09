
// Kedan algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int,1665> arr = {-1, -2, -4, 2, -6, -2,-9,-14, -3, 5};

    int sum=0;
    int max=0;
    for(auto &n : arr){
        sum=sum+n;
        if(sum>max)
        max=sum;

        if(sum<0)
        sum=0;
    }
  
cout<<" Max: "<<max<<endl;
    return 0;
}