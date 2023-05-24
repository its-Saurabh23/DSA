#include <bits/stdc++.h>
using namespace std;




// NewIntersection(){}



void intersection(int arr1[],int arr2[],int n,int m){
    
    for(int i = 0;i<n; i++){
        for(int j =0; j<m;j++){
            if(arr1[i]==arr2[j]){
             cout<<arr1[i]<<" ";
            }
        }
    }
    cout<<endl;
 
}
//  it will taking O(N*N) Time complexity..
void Union(int arr1[],int arr2[],int n,int m){
 int count = 0;
 for(int i=0; i<n;i++){
    for(int j =0;j<m; j++){
        if(arr1[i]==arr2[j]){
            count++;
        }
    }
 }
int res = (n+m)-count;
cout<<res<<endl;
}     


// Time Complexity is O(n+m)log(n+m)
int NewUnion(int arr1[],int arr2[],int n,int m){
    set<int>res;
    for(int i =0;i<n;i++){
        res.insert(arr1[i]);
    }
    for(int j =0;j<m;j++){
        res.insert(arr2[j]);
    }
    for(int i:res){
        cout<<i<<" ";
    }
}
int main(){
int arr1[]={1,2,3,4,5};
int arr2[]={3,4,5,6,7};

int n =5;
int m =5;
intersection(arr1,arr2,n,m);
// Union(arr1,arr2,n,m);
NewUnion(arr1,arr2,n,m);
return 0;
}