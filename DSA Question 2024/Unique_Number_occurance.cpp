class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    map<int,int>mp;

    for(auto it:arr){
        mp[it]++;
    }
    
    set<int>st;

    for(auto it:mp){
        st.insert(it.second);
    }
   
    int n1 = mp.size();
    int n2 = st.size();
    return n1 == n2;
    }
};