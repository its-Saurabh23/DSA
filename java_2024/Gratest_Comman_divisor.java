class Solution {
    public String gcdOfStrings(String str1, String str2) {
        
     if((str1 + str2).equals(str2 + str1)){
        int a = str1.length();
        int b = str2.length();
        int getGcd = gcd(a,b); 
        return str1.substring(0,getGcd);
     }
     else{
        return "";
     }
    }

    int gcd(int a,int b){
        while(b%a != 0){
            int rem = b%a;
            b = a;
            a = rem;

        }
        return a;
     }   
    
}