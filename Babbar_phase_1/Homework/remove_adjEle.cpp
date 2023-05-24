#include<bits/stdc++.h>
using namespace std;


// Approach first with the help of stack

string removeDulicat(string s){

stack<char>st;
for(int i =0; i<s.length();i++){

    if(st.empty()){
        st.push(s[i]);
    }
    else if(st.top()==s[i]){
        st.pop();
    }
    else{
        st.push(s[i]);
    }
}
// taking elements from stack;

string ans ="";
while(st.empty()){
    ans.push_back(st.top());
    st.top();
}

//  reverse element

reverse(ans.begin(),ans.end());
//  return ans;
 for(int i =0; i< ans.length()-1; i++){
    cout<<" "<<ans[i];
 }

}

int main(){
// incomplete answer...
/*char arr [6]={'a','b','b','a','c','a'};
cout<<" hii";
int n = 6;
int i =0;
int j =i+1;
while(i<n){
    if(arr[i] != arr[j]){
     i++;j++;
    }
    else{
        i = arr[i] + arr[j];
        j = 0;
    }
}

for(int i =0; i<n;i++){
    cout<<" " <<arr[i];
} */

string s{'a','b','b','a','c','a'};
removeDulicat(s);

// for(int i=0; i<res; i++ ){
//     cout<<" "<<res[i];
// }
 
return 0;
}