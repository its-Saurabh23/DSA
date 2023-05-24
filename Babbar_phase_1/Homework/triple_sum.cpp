// Triple sum of Array 

#include<iostream>
using namespace std;

int TripleSum(int arr[],int n){
 int temp =n/3;
 int sum = 0;

for(int i = 0; i<temp; i++){
    int start = 0;
    for(int j =0;j<temp;j++){
        sum = sum + arr[start];
        arr[start]++;
     }
        cout<<sum <<" ";
        start = start+3;
    }
  
}

int main(){
    int n;
    int arr [100];
    cout<<"Enter the size of Array "<<endl;
    cin>>n;
    cout<<"Enter the Elements of the Array "<<endl;
    for(int i =0; i<n; i++){
     cin>>arr[i];
    }

    TripleSum(arr,n);
    return  0;
}