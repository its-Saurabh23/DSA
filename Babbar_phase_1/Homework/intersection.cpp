// Intersection of Array 
#include<iostream>
using namespace std;


int intersection(int arr[],int brr[],int n1,int n2){
for(int i =0;i<n1; i++){
     for(int j =0; j<n2; j++){
        if (arr[i]==brr[j])
        {
            cout<<"Intersection of the Array is = " <<arr[i]<<endl;
        }
     }
}

}

int main(){
int n1,n2;
int arr[10];
int brr[10];

// First Array 
cout<<"Enter The size of First Array "<<endl;
cin>>n1;
cout<<"Enter the elemwnt of  First Array "<<endl;
for(int i =0; i<n1;i++){
    cin>>arr[i];
}
// Second Array
cout<<"Enter the size of second Array "<<endl;
cin>>n2;
cout<<"Enter the elements of second Array "<<endl;
for(int i =0; i<n2; i++){
    cin>>brr[i];
}
intersection(arr,brr,n1,n2);


    return 0;
}