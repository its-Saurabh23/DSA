#include<bits/stdc++.h>
using namespace std;

bool BalanceParenthese(string &str){
    stack<string>st;
     for(char ch:str){
      if(ch =='(' || ch =='{' || ch =="["){
        st.push(ch);
      }else if(ch  ==')' || ch =='}' || ch ==']'){
            
        if(st.empty()){
          return false;
        }
      int top = st.top();
          st.pop()
      }
     }
}

int  mian(){
    char str ="({[[]]})";
    BalanceParenthese(str);
    return 0;
}

// Parentheses 