#include<iostream>
using namespace std;


int update(int arr[],int n){
    cout<<"Inside the Function "<<endl;
      arr[0] =120;
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<"Going back to the Function "<<endl;
  
}

int main(){

int arr[3]={1,2,3};
update(arr,3);

for(int i=0;i<3; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}