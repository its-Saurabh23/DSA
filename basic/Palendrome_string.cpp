#include<iostream>
using namespace std;

char tolowerCase(char ch){

    if(ch >='a' && ch<='z'||(ch>='0'&&ch<='9') ){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}


bool checkPalindrome(char a[],int n){

    int s =0;
    int e =n-1;
    while(s<=e){
        if(tolowerCase(a[s]) != tolowerCase(a[e])){
        return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1; 
}
int getLength(char name[]){
    int count =0;
    for(int i =0; name[i] !='\0';i++){

        count++;
    }
    return count;
}

int main(){
char name [20];
cin>>name;
int len = getLength(name);
cout<<"Palendrome or not "<<checkPalindrome(name,len)<<endl;; 

cout<<"CHAARACTER IS "<<tolowerCase('b')<<endl;
cout<<"CHARACTER IS "<<tolowerCase('B')<<endl;

}