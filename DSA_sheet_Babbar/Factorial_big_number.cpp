#include<bits/stdc++.h>
using namespace std;
// Factorial of big Numbers .

void multiply(int arr[],int size,int i){
  int carry =0;

  for(int i = 0;i<size;i++){
    int result = i*arr[i];

     result = result+carry;

     arr[i] = result%10;
     
     carry = result/10; 
  }
  while(carry>0){
    arr[size] = carry%10;
    size++;
    carry = carry/10;
  }
}

void FactorialBigNumber(int n){

    int arr[10000]={0};

    arr[0] = 1;
    int size = 1;

    for(int i = 2; i<n; i++){
     multiply(arr,size,i);
    }
//    printing 
    for(int i =size-1;i>=0;i--){
        cout<<" "<<arr[i];
    }
}

int main(){
int n;
cin>>n;
FactorialBigNumber(n);
}