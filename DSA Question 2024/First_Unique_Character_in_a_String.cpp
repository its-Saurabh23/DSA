class Solution {
public:
    int firstUniqChar(string s) {

        int n = s.size();
       int arr[26]= {0};
       // put all the element in the array or you can take a map also
        for(int i = 0; i<n; i++){
            
            // so we have to store the string value 
            char ch = s[i];

            arr[ch -'a']++;
        }

        for(int i = 0; i<n;i++){
            char ch  = s[i];

            if(arr[ch-'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};