#include<iostream>
using namespace std;
/*


bool isSorted(int *arr,int n ){
    // base cases
    
    if(n == 0 || n ==1){
    return  true;
    }
    
    // Processing 
    // checking that the array is sorted or not

    if(arr[0]>arr[1]){
        return false;
    }
    else{
       return  isSorted(arr+1,n-1);
    }

  
} 

int getSum(int *arr,int n){
    // base case
    if(n == 0){
    return 0;
    }
   
   if(n == 1){
    return arr[0];
   }
//   int remaining = getSum(arr+1,n-1);
//   int sum = arr[0]+ remaining;
//   return sum;
   return arr[0]+getSum(arr+1,n-1);

} 

void print(int *arr,int n ){

    cout<<" Size of Array is "<<n<<endl;

    for(int i =0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool linearSearch(int *arr,int size,int key){
  print(arr,size);
// base case
  if(size == 0){
    return false;
  }
  if(arr[0] == key){
    return true;
  }
  else{
//    bool remainingPart = linearSearch(arr+1,size-1,key);
//    return remainingPart;
     return linearSearch(arr+1,size-1,key);
  }

}

 */

void print(int arr[],int s,int e){
    for(int i =0; i<=e; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
 bool BinarySearch(int *arr,int s,int e,int key){
    cout<<endl;
    print(arr,s,e);
    // base case
    // element not found
    if(s>e){
        return false;
    }
      int mid = s +(e-s)/2;
      cout<<"value of arr mid is "<<arr[mid]<<endl;
      cout<<endl;

    //   element found
    if(arr[mid] ==key)
    {
        return true;
    } 
     if(arr[mid]<key){
   return BinarySearch(arr,mid+1,e,key);
  }
  else{
   return BinarySearch(arr,s,mid-1,key);
  }
 } 

int main()
{

    int arr[6]={2,4,6,10,14,16};
    int size = 6;
    int key = 16;

    cout<<"Present  or Not "<<BinarySearch(arr,0,5,key);

    /*

     int arr[5]={3,5,1,2,6};
     int size = 5;
     int key = 6;
     bool ans = linearSearch(arr,size,key);

     if(ans){
        cout<<"Found "<<endl;
     }
     else{
        cout<<"not found "<<endl;
     }

int arr[5]= {1,5,5,5,5};
int  n = 5;

int ans  = getSum(arr,n);
cout<<"Sum is "<<ans<<endl;

int arr [6]={2,2,6,8,9,10};
int n = 6;

bool ans = isSorted(arr,n);

if(ans){
    cout<<" Sorted "<<endl;
}
else{
    cout<<"Not Sorted "<<endl;
}  */
    return 0;
}