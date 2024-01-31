class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        stack<int>st;

        vector<int>ans(n);

        for(int i = n-1; i>=0; i--){
               
    while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                   st.pop();
    }
                   if(st.empty()){
                        ans[i] = 0;          
                   }
                   else{
                    //    difference 
                    ans[i] = st.top() - i;
                   }
                   st.push(i);
               
        }
        return ans; 
    }
};