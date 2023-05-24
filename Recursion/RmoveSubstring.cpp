#include<bits/stdc++.h>
using namespace std;

string  removeStirng(string s,int size){
// base cse
int j = s[0]; 
if(s.length()==0){
    return " ";
}

if((s[0]>='A' && s[0]<='Z')||(s[0]>='a' && s[0]<='z'))
 { 
 
    return s[0] + removeStirng(s.substr(1),size-1)  ;
 }
   return removeStirng(s.substr(1),size-1);
}
int main(){

string s = "@#4pq";
 cout<< removeStirng(s,s.length()-1)<<endl;
    return 0;
}