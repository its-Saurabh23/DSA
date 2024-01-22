class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;

        for(auto &it :s){
            mp[it]++;
        }

        for(auto &it :t){
            
            mp[it]--;
            
            if(mp[it]<0){
                return it;
            }
        }
        return 'x';
    }
};



// another apporach

class Solution {
public:
    char findTheDifference(string s, string t) {
        int T_sum = 0;

        for(auto &it :t){
            T_sum += it;
        }

        int S_sum = 0;
        for(auto &it: s){
            S_sum += it;
        }
        // return the Difference char form

        return (char) (T_sum - S_sum);

    }
};


//Another Apporach

class Solution {
public:
    char findTheDifference(string s, string t) {
        int XOR  = 0;

        for(auto it: s){
            XOR ^= it;
        }

        for(auto it:t){
            XOR ^= it;
        }

        return (char) XOR;
    } 
};