import java.util.* ;
import java.io.*; 
public class Solution {

	public static boolean checkPalindrome(String str) {
	
// Convert all into lower case
    str = str.toLowerCase();
	str  = str.replaceAll("[^a-zA-Z0-9]","");  

  int left =  0;
  int right  = str.length()-1;

  while(left <= right){
      if(str.charAt(left) != str.charAt(right)){
		  return false;
	  }
	  left++;
	  right --;
  }
	 return true; 
	}
}