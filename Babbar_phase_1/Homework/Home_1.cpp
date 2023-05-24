// Sum of arry


#include<iostream>
using namespace std;


int arraySum(int arr[],int n){
int sum = 0;
for( int i =0;i<n; i++){
    sum =sum+arr[i];
}
return sum;
}
int main(){
int n;
int arr[5];
cout<<"Enter the size of Array "<<endl;
cin>>n;
cout<<"Enter the Elements of array "<<endl;
for (int i =0;i<n; i++){
    cin>>arr[i];
}
int result = arraySum(arr,n);
cout<<"Sum of the Arry is = " <<result<<endl;


    return 0;
}