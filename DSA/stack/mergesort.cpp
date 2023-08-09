#include <bits/stdc++.h>
using namespace std ;


void merge(int arr[],int l,int mid,int r){
    int n1=mid -l +1;
    int n2=r-mid ;


    int l1[n1] ,l2[n2] ;
     
     for (int  i = 0; i <n1; i++)
     {
       l1[i]=arr[l+i];
     }

     for (int  j = 0; j <n1; j++)
     {
       l2[j]=arr[mid+j+1];
     }

int i=0,j=0 ,k= l ;

while(i<n1 && j<n2){
    if(l1[i]<=l2[j]){
        arr[k]=l1[i];
        i++;
    }
    else{
        arr[k]=l2[j];
        j++;
    }
    k++;
}


while(i<n1){
     arr[k]=l1[i];
        i++;
        k++;
}

while(j<n2){
     arr[k]=l2[j];
        j++;
        k++;
}

     
}


void mergesort(int arr[],int l,int r){
    if(l<r){
        int mid = l + (r-l)/2 ;

          mergesort(arr,l,mid);
          mergesort(arr,mid + 1,r);
      
      merge(arr,l,mid,r);

    }
}
  
int main( )  
{ 
    int arr[] ={7,5,9,11,3,5,3};
    int size =sizeof(arr)/sizeof(arr[0]);
    int r = size-1;
    int l=0;
    mergesort(arr,l,r);

    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
  
  
 return 0; 
} 