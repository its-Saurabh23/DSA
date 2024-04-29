class Solution {
    public boolean isAnagram(String s, String t) {
        
        int [] map = new int[26];  // constant space
        
        for(int i = 0; i< s.length(); i++){
            map[s.charAt(i) -'a']++;
        }
        
        for(int i = 0; i<t.length(); i++){
             map[t.charAt(i)-'a']--;
        }
        
        for(int ele: map){
            if(ele != 0){
                return false;
            }
        }
        return true;
    }
}
