#include<bits/stdc++.h>
using namespace std;

string solve(string str,int len,string result){
   
    if(len<0){
      return result;
    }
    return solve(str,len-1, result+str.at(len));

}

int main(){

    cout<<"Enter the string for revers"<<endl;
    string str;
    cin>>str;
     
    string result ="";
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
    // int n = str.length()-1;
    // int n =  str.size()-1;
    // cout<<str.at(n)<<endl;

    cout<<"Reverse string"<<endl;
    string ans = solve(str,str.length()-1,result);
    cout<<ans<<endl;

    return 0;
}