#include<bits/stdc++.h>

using namespace std;

char coonvert(char ch){
    char str = ch -'a' +'A';
    
    return str;
}

int main(){
    
    char ch;
    
    cin>>ch;
    
    std::cout << coonvert(ch) << std::endl;
    return 0;
}