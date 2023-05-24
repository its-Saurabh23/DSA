#include<bits/stdc++.h>
#include<iostream>

using namespace std;
string removeX(string input){
    // base condtion
    if(input.length()<1){
        return input;
    }
   if(input[0] == 'x'){
        return removeX (input.substr(1,input.length()));
 
    } 
    return input[0] + removeX (input.substr(1,input.length()));
} 

int main(){
string input ="axb";

cout<<removeX(input)<<endl;
 

    return 0;
}