#include<iostream>
using namespace std;

void TripleSum(int arr[],int n,int k){
for(int i = 0;i<n;i++){

    if (arr[i] +arr[i+1]+arr[i+2]==k)
    {
        cout<<arr[i] <<" " <<arr[i+1]<<" " <<arr[i+2];
    }cout<<endl;
    
}

}

int main(){
  int k = 12;
//   Unsorted Array;
    int arr[5]={2,1,5,4,3};
    TripleSum(arr,5,k);
    return 0;
}