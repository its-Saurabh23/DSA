#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n ){
    cout<<"Size of array is "<<n<<endl;
    for(int i =0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


bool search(int arr[],int size,int key){
print(arr,size);

// base case 
if(size == 0){
    return false;
}
if(arr[0]==key){
    return true;
}
else{
    bool remainingPart = search(arr+1,size-1,key);
    return remainingPart;
}
}


int main(){
int arr[5]={3,4,1,9,6};
int size =5;
int  key = 9;
bool ans  = search(arr,size,key);

    if(ans){
        cout<<"Found "<<endl;
    }
    else{
        cout<<"Not Fouond "<<endl;
    }

    return 0;

}