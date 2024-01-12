class Solution {
public:
    bool vowel(char c){
        // convert all chacter into lowercase;
        // c = tolower(c);
        return (c =='a' ||  c=='e' || c =='i' || c =='o' || c =='u' 
             || c =='A' ||  c=='E' || c =='I' || c =='O' || c =='U');
    }
    bool halvesAreAlike(string s) {
        int cnt = 0;
        int n =s.size(); 

        for(int i = 0; i<n/2; i++){
            if(vowel(s[i]))cnt++;
            if(vowel(s[n-i-1]))cnt--;
        }
        return cnt == 0;
    }