#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>&chars){
    int i =0;
    int ansIndex =0;
    int n =chars.size();
    while(i<n){
        int j= i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }
  
    // ya to pura travse hoga ya phir
    // ya fir nedifferent charcter aayrga.

    // lod charatger ko store karlo;

    chars[ansIndex++] = chars[i]; 
    int count =j-i;

    if(count>1){
        // converting counting into single digit 
        // and saving into ans
        string cnt = to_string(count);
        for(char ch:cnt){
            chars[ansIndex++] = ch;
        }
    }
    // Moving to the new character
    i = j;
    }
    cout<< " " <<ansIndex;
}


int main(){
vector<char> chars['a','a','a','b','b','b','c','c','c'];

// cout<<" index "<<compress(chars)<<endl;
    return 0;
}