#include<bits/stdc++.h>
using namespace std;


//  -- if u want to print only 1 subSequence 
bool flag = true;   

void PrintSum(int idx,vector<int>&ds,int s,int arr[],int sum,int n){
   
   if(idx>= n){
    if(s == sum && flag){
      for(auto it: ds)cout<< it <<" ";
       
      //  flag = false;
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


// without the global variable 
#include<bits/stdc++.h>
using namespace std;

int printSingleSubSequence(int idx,int n,int arr[],vector<int>&ds,int sum,int initalSum){
  
  if(idx >=n){
    if(initalSum == sum){
      for(auto it:ds)std::cout << it<<" ";
      cout<<endl;
       return true;
    }
    else{
    return false;
    }
  }
  
  ds.push_back(arr[idx]);
  initalSum += arr[idx];
  if(printSingleSubSequence(idx+1,n,arr,ds,sum,initalSum) == true){
    return true;
  }
  
  ds.pop_back();
  initalSum -= arr[idx];
  
  if(printSingleSubSequence(idx+1,n,arr,ds,sum,initalSum) == true){
     return true; 
  }
  
  return false;
}

int main(){
  
  int arr[]={1,2,1};
  int n = 3;
  int sum = 2;
  vector<int>ds;
  
  if(printSingleSubSequence(0,n,arr,ds,sum,0)){
   cout<<"SubSequence avuiable"<<endl;
  }else{
    cout<<"No SubSequence avuiable"<<endl;
  }
  
  return 0;
}