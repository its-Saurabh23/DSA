class Solution {
public:
typedef pair<char,int>P;

    struct lamda{
    bool operator()(P &p1, P &p2){
        return p1.second < p2.second;   // max heap 
     }
    };
    string frequencySort(string s) {
    priority_queue<P,vector<P>,lamda> pq;
    int n = s.length();
    map<char,int>mp;
     string str = "";    

     for(int i = 0; i<n; i++){
         char ch = s[i];
         mp[ch]++;
     }

     for(auto &it:mp){
         pq.push({it.first,it.second}); 
     }
       
     while(!pq.empty()){
           P temp = pq.top();
           pq.pop();
           str+= string(temp.second,temp.first);
       }
     return str;

    }
};