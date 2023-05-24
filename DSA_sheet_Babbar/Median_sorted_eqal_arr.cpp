
// First approach
//  Time Complexity wiil be O(N*N)
//  size of array is equal
 
#include<iostream>
using namespace std;

 /*int  MedianOfArray(int arr1[],int arr2[],int m,int n){
    int temp ;
    for( int i = 0; i<n; i++){
       if(arr1[i]>arr2[0]){
        temp = arr1[i];
        arr1[i] = arr2[0];
        arr2[0] = temp;
       
       int j = 0;
       while((j+1<n) && (arr2[j]>arr2[j+1])){
        temp = arr2[j];
        arr2[j] = arr2[j+1];
        arr2[j+1] = temp;
       j++;
       }
       }
    } 
    return (arr1[m-1]+arr2[0])/2;
} */

// Optimise apporach will be

// We don't need two loop use to two pointer 

// Time Complexity is O(N);         :)
int  MedianOfArray(int arr1[],int arr2[],int e,int s){
   int i =0,j = 0;
   int m1,m2=-1;
    for(int count = 0; count<=e; count++){
      if(arr1[i]<arr2[j]){
        m1 =m2;
        m2 = arr1[i];
        i++;
      }
      else{
       m1= m2;
       m2 = arr2[j];
       j++;
      }
    if(i == e){
        m1=m2;
        m2 =arr2[0];
        break;
    }
    else if (j == e)
    {
        m1=m2;
        m2 = arr1[0];
        break;
    }
    }
    return (m1+m2)/2;
    
}


int main(){

int arr1[]={1,12,15,26,38};
int arr2[]={2,13,17,30,45};

cout<<"Median will be = "<< MedianOfArray(arr1,arr2,5,5)<<endl;
    return 0;
}


