// Swap alternatre
#include<iostream>
using namespace std;
int  swapingAlternate(int arr [],int n){
    int start = 0;
    int end = 1;
    while (start<n)
    {
        swap(arr[start],arr[end]);
        start = start+2;
        end = end+2;
    }  
}
// Printing Function

int printArry(int arr[],int n){
   for(int i=0;i<n;i++){
      cout<<" "<<arr[i];
   }
}
int main(){
    
    int n ;
    int arr[60];
    cout<<"Enter the size of an Array "<<endl;
    cin>>n;
    cout<<"Enter the elements of array "<<endl;
   for(int i =0; i<n; i++){
    cin>>arr[i];
    }
 swapingAlternate(arr,n);

 printArry(arr,n);
 
    return 0;
}