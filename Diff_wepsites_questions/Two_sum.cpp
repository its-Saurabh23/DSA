#include<iostream>
using namespace std;


int TwoSum(int arr[],int n,int target){
    for(int i = 0; i<n; i++){
        for(int j =i+1; j<n; j++){
          if(arr[i]+arr[j]==target){
            cout<< i<<" "<<j<<endl;
          }

        }
    }
}

int main(){
int arr [4]={2,7,11,15};
int targert = 9;
TwoSum(arr,4,9);

    return 0;
}