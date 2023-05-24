#include<bits/stdc++.h>
using namespace std;


void reversee(string& str,int i,int j){
    cout<<" call recieved for "<<str<<endl;
    // base case 
    if(i>j){
        return ;
    }

    swap(str[i++],str[j--]);
  
    // recursive call
    reversee(str,i,j);
}

int main(){

string name ="ABCD";

cout<<endl;
reversee(name,0,name.length()-1);
cout<<endl;

cout<<name<<endl;
    return 0;
}