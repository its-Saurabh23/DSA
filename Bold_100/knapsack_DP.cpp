#include<bits/stdc++.h>
using namespace std; 

int kanpsnack(vector<int>&wt,vector<int>&arr,int W,int n){
   
    //Base Case
    if(n == 0 || W == 0){
       return 0;
    }

    //choice Diagram
    if(wt[n-1]>w){
    return kanpsnack(wt,arr,w,n-1);
    }
    else  if(wt[n-1]<=w){
        // 2 case pick or non pick
    }
}

int main (){

    int wt = [];
    vector<int>wt={}
    vector<int>val={}
    int W = 10
    int n = val.size();

kanpsnack(wt,val,W,n);
return 0;

}