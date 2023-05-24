// Duplicate element in Array 
// If the  array is sorte than this program will work correctly
 
#include<iostream>
using namespace std;

int  duplicate(int arr[],int n){
    int start =0;
    int end =start+1;
    for(int i=0; i<n; i++){

        if (arr[start]==arr[end])
        {
            cout<<" "<<arr[start] <<" "<<arr[end];
        }
        start = start+1;
        end = end+1;
        
    }
}

// Second Apporach 

// int printArray(int arr[],int n){
//     for(int i =0; i<n; i++){
//         cout<<arr[i];
//     }
// }
int main(){
int n;
int arr [100];
cout<<"Enter the size of Array "<<endl;
cin>>n;
cout<<"Enter the elements of Array "<<endl;

for(int i =0; i<n;i++)
{
    cin>>arr[i];
}

int r = duplicate(arr,n);
cout<<"Sort";
cout<<r;
// printArray(arr,n);
    return 0;
}