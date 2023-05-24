#include<iostream>
using namespace std;

int printArray (int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void sortOne(int arr[],int n){
    int left =0,right =n-1;
    while(left<right){
        if (arr[left]==0)
        {
            left++;
        }
        while (arr[right]==1)
        {
            right--;
        }
        // arr[i]==1 and arr[j]==0
        
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main(){
int arr[8] ={0,1,0,1,0,0,1,0};

sortOne(arr,8);

printArray(arr,8);
    return 0;
}