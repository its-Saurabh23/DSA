#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string str) {
   //Write your code here 
    for(int i = 0; i<str.size();i++){  
       for(int j =0; j<=str.size();j++){
         if (i < j) {
           cout << str.substr(i, j)<<endl;
         }
       }
   }  
    
}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}