#include <bits/stdc++.h>
using namespace std;
 
int solve(string & str){
      if(str.length() == 0){
        return 0;  
      }
      
      int lenght = 0;
      int left = 0;
      unordered_set<char>st;
      
      for(int right = 0; right<str.length(); right++){
         
         while(st.count(str[right])){
            st.erase(str[left]);
            left++;
         }
         
        st.insert(str[right]);
        
        lenght =  max(lenght,right-left+1);
      }
      return lenght;
}

int main()
{
   string str ="aaaa";
   int maximumSubStrigCount = solve(str);
   std::cout << maximumSubStrigCount << std::endl;
   
    return 0;
}