#include<bits/stdc++.h>

using namespace std;

int main(){

stack<int> s;

string  st = "abc";

for(int i = 0; i<st.length(); i++){
      
       char ch = st[i];
       s.push(ch);
}

 string ans = "";

 while(!s.empty()){

    char tope = s.top();
    ans.push_back(tope);
    s.pop();
 }

 cout<<" "<<ans<<endl;

    return 0;
} 