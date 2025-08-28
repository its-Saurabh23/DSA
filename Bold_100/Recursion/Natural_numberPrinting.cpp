#include<bits/stdc++.h>
using namespace std;

// void print(int n,int i){

//     //base case
//     if(i == n){
//         cout<<i<<endl;
//         return;
//     } 
//     cout<<i<<endl;
//     print(n,i+1);
// 
// with single argument

void print(int n){

    //base case
    if(n<1){
        return;
    } 
    print(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter a natural number"<<endl;
    cin>>n;
    // print(n,1);
    print(n);
    return 0;
}