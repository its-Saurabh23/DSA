// Pair of sum in Array

#include<iostream>
using namespace std;

int pairSum(int arr[],int n){
    int temp = n/2;
    int start = 0;
    int end = start +1;
    int sum = 0;
    for(int i = 0 ;i<temp ;i++){
     sum = arr[start] + arr[end];
     cout<<sum<<endl; 
       start =start+2;
       end= end+2;
    }
}
int main(){
int n;
int arr[100];
cout<<"Enter the size of Array "<<endl;
cin>>n;

cout<<"Enter the Elements of Array "<<endl;
for(int i =0; i<n; i++){
    cin>>arr[i];
}

 pairSum(arr ,n);
 return 0;
}