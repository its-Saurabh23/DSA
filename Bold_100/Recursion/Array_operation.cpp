#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int index,int size){ 
    if(index == size){
        return 0;
    }
    return arr[index] + sum(arr,index+1,size);
}

int sum1(int arr[],int index){
      return arr[index];
}

int main(){
    int arr[]={3,4,1,2,8};
    
    // int total = 0;
    // for(int i = 0; i<5; i++){
    //   total += sum1(arr,i); 
    // }
    // cout<<total<<endl;
    
    // cout<<sum(arr,0,5);

    return 0;
}