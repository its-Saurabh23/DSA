#include <bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    
    int size = 0;
    
    heap(){
        arr[0]  =-1;
        size= 0;
    }
    
    void insert(int val){
     size = size+1;
     int index = size;
     
     arr[index] = val;
     
     while(index>1){
        int parent = index/2;
        
        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
        }
        else{
            return;
        }
     }
    }
    
    void print(){
        for(int i =1 ;i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    void Delete(){
        if(size == 0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        
        // put last element to first element
        arr[1] = arr[size];
        
        // deleting the last node so size will be decreased 
        size--;
        
        // tkae root node to its correct position
        
        int i = 1;
        while(i<size){
            int leftIndex =2*i;  
            int rightindex = 2*i+1;
            
            
            if(leftIndex<size && arr[i]<arr[leftIndex])
            {
                swap(arr[i],arr[leftIndex]);
                //index update;
                i = leftIndex;
            }
            
            else if(rightindex<size && arr[i]<arr[rightindex])
            {
                swap(arr[i],arr[rightindex]);
                // update update
                i = rightindex;
            }
            else
            {
                return;
            }
        }
    }
};

   void heapify(int arr[],int n,int i){
        
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;
        
        if(left<=n && arr[largest]<arr[left]){
            //update index
            largest = left;
        }
        if(right<=n && arr[largest]<arr[right]){
            // update index
            largest  = right;
        }
       
        if(largest != i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
    
    void heapSort(int arr[],int n){
        int size =n;
        
        while(size >1){
            //step1 swap last elemtn to the first elemtn
            swap(arr[size],arr[1]);
            
            // decrese the size
            size--;
            
            // bring the root element to its correct postion 
            heapify(arr,size,1);
            
        }
        
    }

int main()
{
    heap h1; 
    h1.insert(50);
    h1.insert(55);
    h1.insert(53);
    h1.insert(52);
    h1.insert(54);
    h1.print();
    
    h1.Delete();
    h1.print();


    int arr[6]={-1,54,53,55,52,50};
    
    int n = 5;
    for(int i =n/2; i>0;i--){
        
       heapify(arr,n,i);    
    }  
    
    cout<<"Printing thr array now "<<endl;
    for(int i =1 ;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    
    // heapSort
    
    heapSort(arr,n);
    cout<<"Printing thr sorted array "<<endl;
    for(int i = 1 ;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    cout<<"using Priorty Queue here"<<endl;
    
    // max heap
    priority_queue<int>pq;
    
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    
    cout<<"Element at the Top "<<pq.top()<<endl;
    pq.pop();
    
    cout<<"Element at the Top "<<pq.top()<<endl;
    
    cout<<"Size is "<<pq.size()<<endl;
    
    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }
    else
    {
        cout<<"pq is not empty"<<endl;
    }
    
    cout<<"Min heap"<<endl;
    // min heap
    priority_queue<int,vector<int>,greater<int> >minHeap;
    
    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);
    
    cout<<"Element at the Top "<<minHeap.top()<<endl;
    minHeap.pop();
    
    cout<<"Element at the Top "<<minHeap.top()<<endl;
    
    cout<<"Size is "<<minHeap.size()<<endl;
    
    if(minHeap.empty()){
        cout<<"minHeap is empty"<<endl;
    }
    else
    {
        cout<<"minHeap is not empty"<<endl;
    }
    return 0;
}
