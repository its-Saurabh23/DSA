#include<iostream>
using namespace std;

void Occurance(int arr[],int n){
int k =0;
for(int i=0; i<n; i++){

    for(int j =i+1; j<n; j++){
  
        if (arr[i]==arr[j])
        {
     
            cout<<" " <<arr[i]; 
            k = k+1;
        }
    }   
}
cout<<" Number of times print "<< k;
cout<<endl;
  
}

int main(){
int arr [8]={4,3,2,7,8,2,3};
Occurance(arr,8);
    return 0;
}