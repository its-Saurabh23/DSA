#include<bits/stdc++.h>
using namespace std;

/*
Given that a function

// k = 2;
int vectro(vector<int>A,int n ,int k){


    deque<int>dq;
    vector<int>ans;
    // store answer..

    for(int i = 0;i<k;i++){
        if(A[i]<0){
         dq.push_back(i);
        }
    }
    // store the negative element in the ans vector
      if(dq.size()>0){
      ans.push_back(A[dq.front()]);
      }
      else{
        ans.push_back(0);
    }

    // rest of the elements.. which is coming to queue
    for(int i = k; i<n;i++){
        
     if(!dq.empty() && i - dq.front()>=k){
        dq.pop_front();
     }
    
    // addition
     if(A[i]<0){
        ans.push_back(i);
     }
    //  sotre ans in queue..
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
   return ans;
    }
}

*/