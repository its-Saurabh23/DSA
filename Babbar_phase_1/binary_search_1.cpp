#include<iostream>
using namespace std;

int firstOcuu(int arr[],int n,int key){
    int s =0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){

    if (arr[mid]==key)
    {
         ans = mid;
         e = mid-1;
       
    }
     else if(key>arr[mid]){ 
    // right;  
      s = mid+1;
     }
     else if (key<arr[mid])
     {

       e = mid -1;
     }
    mid = s + (e-s)/2;
    }
    return ans;
}


int LastOcuu(int arr[],int n,int key){
    int s =0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){

    if (arr[mid]==key)
    {
         ans = mid;
         s = mid+1;
       
    }
     else if(key>arr[mid]){ 
    // right; 
      
      s = mid+1;
     }
     else if (key<arr[mid])
     {

       e = mid -1;
     }
    mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

int even[7]={1,1,1,2,3,5,5};
cout<<" first occurence of 5 is at index  = "<<firstOcuu(even,7,5)<<endl;

cout<<" Last occurence of 5 is at index  = "<<LastOcuu(even,7,5)<<endl;
    return 0;
}