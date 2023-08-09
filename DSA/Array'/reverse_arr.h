
void reverse(int arr[],int low,int end){


   while(low<end){
    int temp=arr[low];
    arr[low]=arr[end];
    arr[end]=temp;
    low=low+1 ;
    end=end-1;

     }

     return ;


}