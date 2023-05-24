#include<bits/stdc++.h>
using namespace std;

string  removeAllSring(string str, char x)
{
    // base case
    if(str.length()==0){
        return "";
    }

    // checking
    if(str[0] == x){
        return removeAllSring(str.substr(1),x);
    }

    // agar nhi hota hai first value

    return  str[0]+removeAllSring(str.substr(1),x);
}
int main(){

string str  = "appleapple";
char x = 'p';
cout<<removeAllSring(str,x)<<endl;
    return 0;
}