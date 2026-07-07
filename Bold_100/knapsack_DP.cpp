#include<bits/stdc++.h>
using namespace std; 

int kanpsnack(vector<int>&wt,vector<int>&arr,int W,int n){
   
   //base case 
    if(n == 0 || W == 0){
       return 0;
    }

    //choice 
    if(wt[n-1]>w){
    return kanpsnack(wt,arr,w,n-1);
    }
    else if(wt[n-1]<=w){
        //2 case pick or non pick
        return max(val[n-1], knapsack (wt,are,w-arr[n-1],n-1),knapsack (wt,are,w,n-1);
    }
}

int main (){

    int wt = [];
    vector<int>wt={}
    vector<int>val={}
    int W = 10
    int n = val.size();

kanpsnack(wt,val,W,n);
return 0
}


#include <bits/stdc++.h>
using namespace std;

int knapsack(int wt[],int val[],int W,int n){
    
    // Base case 
    if(n == 0 || W == 0 ){
        return 0;
    }
    
    // choice digram 
    if(wt[n-1]<=W){
        
     return max(val[n-1] + knapsack(wt,val,W-wt[n-1], n-1),knapsack(wt,val,W,n-1));
    }
    else if(wt[n-1]>W){
        return knapsack(wt,val,W,n-1);
    }
    
}

int main()
{
 
    return 0;
}
