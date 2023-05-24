#include<iostream>
using namespace std;


void SelcetionSort(int arr[],int n){
for(int i =0; i<n-1; i++){
int minIndex =i;
for(int j =i+1; j<n; j++){
if(arr[j]< arr[minIndex]){
    minIndex = j;
}
}
swap(arr[minIndex],arr[i]);
}

for(int i = 0; i<n; i++){
    cout<<arr[i]<<endl;
}
}


int main(){

int  arr [8]= {29,72,13,87,86,52,51,36};

SelcetionSort(arr,8);

    return 0;
}