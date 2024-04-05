// O(1);

class Solution {
public:
    int maxDepth(string s) {
        int bracket = 0;
        int ans = 0;
        
        for(auto ch: s){
            
            if(ch == '('){
                bracket++;
            }
            else if(ch ==')'){
                bracket--;
            }
            ans = max(ans,bracket);
        }
        return ans;
    }
};

// T.C = (N);
// S.C =(O/2) Stack space half for this ' ( '
class Solution {
public:
    int maxDepth(string s) {
        
        int res = 0;
        stack<int>st;
        
        for(auto ch:s){
            if(ch =='(' ){
             st.push('(');   
            }
            else if(ch ==')'){
                st.pop();
            }
            res = max(res,(int)st.size());
        }
        return res;
    }
};