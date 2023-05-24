#include<bits/stdc++.h>
using namespace std;

void removeSubString(string s){

  int j = 0;
    for(int i =0; i<s.size(); i++){

        if((s[i]>='A' && s[i]<='Z') || s[i]>='a' && s[i]<='z')
        {
          s[j] =s[i];
          j++;
        }
    }

    cout<<s.substr(0,j);
}


int main(){
string s = "A@pp1l4e";

removeSubString(s);

    return 0;
}