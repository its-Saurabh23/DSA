#include<bits/stdc++.h>
using namespace std;

void PrintSum(int idx,vector<int>&ds,int s,int arr[],int sum,int n){
   
   if(idx>= n){
    if(s == sum){
      for(auto it: ds)cout<< it <<" ";
      cout<<endl;
    }
    return;
   }
  
  ds.push_back(arr[idx]);
  s += arr[idx];
  PrintSum(idx+1,ds,s,arr,sum,n);

  ds.pop_back();
  s -= arr[idx];

  PrintSum(idx+1,ds,s,arr,sum,n); 

}

int main()
{

    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int>ds;
  
    PrintSum(0,ds,0,arr,sum,n);
    return 0;
}