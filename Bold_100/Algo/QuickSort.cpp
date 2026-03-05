
#include <iostream>
using namespace std;

int partition(int arr[],int low,int heigh){
    
    int pivot = arr[heigh];
    int i = low -1;
    
    for(int j = low; j<heigh; j++){
        
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[heigh]);
    return i+1;
}
void quickSort(int arr[],int low,int heigh){
    if(low<heigh){
        int pi = partition(arr,low,heigh);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,heigh);
    }
}
int main()
{
    int arr[]={8,3,1,7,0,10,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    
    for(auto &it:arr){
        std::cout << it<<" ";
    }
    return 0;
}