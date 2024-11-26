#include<bits/stdc++.h>
using namespace std;

/*
void swapfunction(vector<int>&v,int l,int r){
  //base case
  if(l>=r){
    return;
  }
  swap(v[l],v[r]);
  
  swapfunction(v,l+1,r-1);
  
}
*/

void swapfunction(vector<int>&v,int i, int n){
  if(i>= n/2){
    return;
  }
  swap(v[i],v[n-i-1]);
  swapfunction(v,i+1,n);
}

int main(){

  vector<int>v = {5,4,3,2,1};  
  int n = 5;
  swapfunction(v,0,n);
  
  for(int i =0; i<n; i++){
    std::cout <<v[i]<< std::endl;
  }
 return 0; 
}