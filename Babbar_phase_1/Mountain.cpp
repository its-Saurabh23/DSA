//  Mountain Peak Element

#include<iostream>
using namespace std;
void PeakElement(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;
    
    while(s<e){
    if (arr[mid]<arr[mid+1])
    { 
        s = mid+1;
    }
    else{
        e = mid;      
    }
     mid = s+(e-s)/2;
    }
  cout<< s <<" "<<endl;
}

int main(){
int arr[5]={3,4,5,1,0};
PeakElement(arr,5);
    return 0;

}
