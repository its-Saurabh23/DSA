// T.C. = for sorting  O - n(log n)
// Binary Search O(log n) 

// Total Time complexity n(log n) + (log n) = n(log n)


#include<bits/stdc++.h>
int aggressiveCows(vector<int> &stalls, int k)
{
  int n = stalls.size();
    //  sorting  
  sort(stalls.begin(),stalls.end());
 
  int start = 1,mid,ans;
  int end  = stalls[n-1] - stalls[0];

  while(start<=end){
      mid  = start + (end- start)/2;
     
     int cnt = 1; int position = stalls[0];
     for(int i = 1; i<n; i++){
         if(position + mid <= stalls[i]){
             cnt++;
             position  = stalls[i];
         }
     }
     if(cnt<k){
         end = mid-1;
     }
     else{
         ans  = mid;
         start = mid + 1;
    }
   
  } 
   return ans;
}  