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

int min(int arr[],int index,int &mini,int n){
    if(index == n){
        return mini;
    }    
    
    if(arr[index] < mini){
        mini = arr[index];
    }
    return min(arr,index+1,mini,n);
}

int  minEle(int arr[],int index,int n){
      
    if(index == n){
        return arr[index];
    }


    return min(arr[index],minEle(arr,index+1,n));
}

int main(){
    int arr[]={3,4,1,2,8};;


    cout<<minEle(arr,0,4);

    // int minEle = INT_MAX;
    // min(arr,0,minEle,4);
    
    // cout<<minEle<<endl;
    // int total = 0;
    // for(int i = 0; i<5; i++){
    //   total += sum1(arr,i); 
    // }
    // cout<<total<<endl;
    
    // cout<<sum(arr,0,5);
    return 0;
}