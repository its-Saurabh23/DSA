#include<bits/stdc++.h>
using namespace std;

bool BalanceParenthese(string &str){
    stack<char> st;
    for(char ch : str){
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        } 
        else if(ch == ')' || ch == '}' || ch == ']'){
            if(st.empty()){
                return false;
            }

            char top = st.top();
            st.pop();
            // matching check
            if((ch == ')' && top != '(') ||
               (ch == '}' && top != '{') ||
               (ch == ']' && top != '[')){
                return false;
            }
        }
    }

    return st.empty();
}

int main(){
    string str = "([])";
    cout << BalanceParenthese(str);
    return 0;
}
