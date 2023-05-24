#include<bits/stdc++.h>
using  namespace std;



bool checkPalindrome(string str ,int i,int j ){

// base case
if(i>j){
    return true; 
}

if(str[i]!=str[j]){
    return false;
}
else{
    // Recursive case
    return checkPalindrome(str,i+1,j-1);
}
}
int main(){

string name = "BookkooB";

cout<<endl;
 bool isPalindrome = checkPalindrome(name,0,name.length()-1);

if(isPalindrome){

    cout<<" Its a Palaindrome "<<endl;
}
else{
    cout<<"Its not a Palaindrome "<<endl;
}
    return 0;
}