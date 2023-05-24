#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){

// for(int i =1; i<n; i++){

//     for(int j = 0; j<n-i; j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
// }

// Optimize approach 

for(int i = 1; i<n; i++){
    bool swapped = false;
    for(int j = 0; j<n-i; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
    }
    if(swapped == false){
        break;
    }
}

 cout<<"Sorted Array is "<<endl;

 for(int i =1;i<n; i++ ){
    cout<<arr[i]<<endl;
 }

}

int main(){
    int arr [5]={6,2,8,4,10};

BubbleSort(arr,5);

    return 0;
}