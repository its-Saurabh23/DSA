#include<bits/stdc++.h>
using namespace std;


vector<int>NextGreaterElement(vector<int>&nums){
    vector<int>result;
    
    if(nums.empty()){
        std::cout<<"Empty input"<<"\n";
        return {};
    }
    
    stack<int>st;
    
    for(int i = nums.size()-1; i>=0; i--){
        
        while(!st.empty() && st.top() <= nums[i]){
            st.pop();
        }     
       
       if(st.empty()){
           result.push_back(-1);
       }else{
           result.push_back(st.top());
       }
       
       st.push(nums[i]);
    }
    reverse(result.begin(), result.end());
    
    return result;
}

int main(){
    vector<int>num={21,2,44,5,1,9};
    vector<int>ans = NextGreaterElement(num);
    
    for(int x: ans){
        std::cout<<x<<"\t";
    }
    return 0;
}