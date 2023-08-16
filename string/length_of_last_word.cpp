/*
class Solution {
public:
    int lengthOfLastWord(string s) {

        int k = 0;
        int flag = 0;
        for(int i= s.size()-1; i>=0;i--){
            if(s[i]==' '&& flag)break;

            if(s[i]!=' '){
                flag = 1;
                k = k+1;
            }
        }
        return k;
    }
};*/