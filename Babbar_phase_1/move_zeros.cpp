#include<iostream>
using namespace std;


void move_arr(int arr[],int n){
    int i =0;
    for(int j =0; j<n;j++){
        if(arr[j] !=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }

for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
}
}
int main(){

int arr [5]={0,1,0,3,12};

move_arr(arr,5);

    return 0;
} 