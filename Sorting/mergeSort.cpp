#include<iostream>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    int len1 = mid -start+1;
    int len2 = end - mid;

    // creating empty array
    int leftArry[len1],rightArry[len2];

    // coping
    for(int i = 0; i<len1; i++){
        leftArry[i] = arr[start+i];
    } 
    for(int j =0; j<len2; j++){
        rightArry[j] = arr[mid + 1 +j];
    }
    int i = 0;
    int j = 0;
    int k = start;
    while(i <len1 && j<len2){
        if(leftArry[i]<=rightArry[j]){
         arr[k] = leftArry[i++];
        }
        else{
            arr[k] = rightArry[j++];
        }
        k++;
    }
    while(i<len1){
        arr[k++] = leftArry[i++];
    }
    while(j<len2){
        arr[k++] = rightArry[j++];
   }
}
void  mergeSort(int arr[],int start,int end){
    
if(start<end){
    int mid = start + (end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
}

void display(int arr[],int n){
    
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
 }
int main(){
int n;
cin>>n;
int arr[n];

for(int i = 0; i<n; i++){
    cin>>arr[i];
}

int start = 0;
cout<<"Before sorting arr "<<endl;
display(arr,n);
cout<<endl;
mergeSort(arr,0 ,n);
cout<<"After sorting Arry "<<endl;

display(arr,n);
    return 0;
}