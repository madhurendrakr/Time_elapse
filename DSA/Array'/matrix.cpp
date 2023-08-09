#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int num;
    // int matrix[5][5];
   cout<<" Enter num : "<<endl;
   cin>>num;
    vector<vector<int>> matrix(num, vector<int>(num));

    int k=1;
    for (int i = 0; i < num; i++)
    {
      // vector<int>x;
       for (int j = 0; j < num; j++)
       {
        int temp=k++;
      //   x.push_back(temp);
        matrix[i][j]= (temp);
       }
       
    }

    cout<<"Matrix elements: "<<endl;  
     for (int i = 0; i <num; i++)
    {
       for (int j = 0; j <num; j++)
       {
        cout<<matrix[i][j]<<" ";
       }
       cout<<endl;
    }  

  
return 0;
}