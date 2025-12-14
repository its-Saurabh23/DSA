// Binary Search

#include<iostream>
using namespace std;

int  BinarySearch(int arr[],int n,int target){

int s =0;
int e =n-1;
int mid = s +(e-s)/2;

while(s<=e){

    if(arr[mid] == target){
        return mid;
    }

    //Condition Second 
    if(arr[mid]<target){
        s = mid+1;
    }
    else{
        e = mid-1;
    }
    mid = s+(e-s)/2;
}
return s;
}

int main(){

int target = 9;
int arr[5]={1,2,5,6,15};

int Result = BinarySearch(arr,5 ,target);
cout<<"Index of Target Value is = "<<Result<<endl;
return 0;
}