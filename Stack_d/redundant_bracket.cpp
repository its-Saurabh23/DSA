/*
#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char>st;

    for(int i =0; i<s.length(); i++){
       char ch = s[i];
    //   checking that string is closing breacket of operator

      if(ch =='('||ch =='+'||ch=='-'||ch=='*'||ch =='/'){
            st.push(ch);
      }
      else{
        //   rest of sting
        if(ch==')'){
            bool isRedundant = true;

            while(st.top() !='('){
                char top = st.top();
                if(top =='+'||top =='-'||top=='*'||top =='/' ){
                isRedundant = false;
                 st.pop();
                }
                 
            }
              st.pop();
         if(isRedundant == true){
         return true;
       
        }
         
      }
    }
      
    }
   return false;
}

*/