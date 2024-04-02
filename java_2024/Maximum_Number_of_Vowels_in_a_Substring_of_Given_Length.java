class Solution {
    public int maxVowels(String s, int k) {
        
        Set<Character> v = new HashSet<>();
        v.add('a');
        v.add('e');
        v.add('i');
        v.add('o');
        v.add('u');

        int vowelsValue = 0;
      

       //for first k values 
        for(int i = 0; i<k; i++){
            if(v.contains(s.charAt(i))){
                vowelsValue++;
            }   
        }

        // apply Slinding window 
           int windowVowels = vowelsValue;

           for(int i = k; i<s.length(); i++){
              
              if(v.contains(s.charAt(i-k))){
                   vowelsValue--;   
                }
              if(v.contains(s.charAt(i))){
                vowelsValue++;
              }  

        // Taking the maximum value
        windowVowels = Math.max(windowVowels,vowelsValue);
        }
        return windowVowels;

    }
}