#include<bits/stdc++.h>
using namespace std;

int countVol(string str,int index){
    
    if(index == -1){
        return 0;
    }  
    
    if(str[index] =='a' || str[index] == 'e' ||str[index] =='i' || str[index] =='o' || str[index] == 'u'){
        
    return 1 + countVol(str,index-1);    
        
    }else{
        return countVol(str,index-1);
    }
    
} 

// const vector<int>&arr ==> read-only 
// vector<int>&arr ==> mutable  
int getMin(const vector<int>&arr,int mini,int index){
    
    if(index == -1){

        return mini;
    }
    if(arr[index]<mini){
        mini = arr[index];
    }
    return getMin(arr, mini, index -1);
}


int main(){
   string str ="hii how are u i am fine";
   int size = str.size();
    
    // cout<<str.size();
    
  int res = countVol(str,size);
  cout<<res<<"\n";
    
    // cout<<"Hello"<<"\n";    
    return 0;
}