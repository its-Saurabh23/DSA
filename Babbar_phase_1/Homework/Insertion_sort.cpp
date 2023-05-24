#include<iostream>
using namespace std;

void Insertion_Sort(int arr[],int n){
for(int i =1; i<n; i++){
      int temp = arr[i];
      int j =i-1;
    for(; j >=0 ; j--){
        if(arr[j]>temp){
            // shift 
            arr[j+1] =arr[j];
        }
        else{
        break;
        }
    }
    arr[j+1] =temp;
}

for(int i = 0; i<n; i++){
    cout<<arr[i]<<endl;
}
}
int main(){
int arr [7]={10,1,7,4,8,2,11};
Insertion_Sort(arr,7);

    return 0;
}