#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        
        stack<int>s;
        vector<int>ans;
        int n = q.size();
        //step 1 put half element into into stack
        for(int i = 0;i<n/2;i++){
            int val = q.front();
            q.pop();
            
            // putiing into stack
            s.push(val);
        }
        
        //step 2 pop form stack and put into q
        while(!s.empty()){
            int val = s.top();
            s.pop();
            q.push(val);
        }
        //step 3 fetch half element front q and push it
        for(int i =0; i<n/2; i++){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        // step 4 again put half of element of q into stack
        for(int i =0; i<n/2; i++){
            int val = q.front();
            q.pop();
            // putting into stack
            s.push(val);
        }
        // step 5 Now pop form stack and simtuneasly fetch form q and 
        // push to the end of q; 
        
        while(!s.empty()){
            int val  = s.top();
            s.pop();
            //pusing into q 
            q.push(val);
            //now fatch from q 
            int val2 = q.front();
            q.pop();
            q.push(val2);
        }
        // push q into ans;
        while(!q.empty()){
            int val = q.front();
            ans.push_back(val);
            q.pop();
        }
        
      return ans;
    }
    
};

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        queue<int> q;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push(a);
        }
        Solution ob;
        vector<int> ans=ob.rearrangeQueue(q);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}