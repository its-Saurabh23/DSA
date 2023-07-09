#include<bits/stdc++.h>
using namespace std;

int main(){

int n = 4;
for(int i =1; i<=n; i++){
    // For row ke liye
    int cnt = i;
    for(int j =1; j<=i; j++){
       
       cout<<" "<<cnt  ;
       cnt = cnt+1;
    }cout<<endl;
}





/*

int count  = 1;
for(int i = 1; i<=n; i++){
    // for rows 
    for(int j = 1;j<=i; j++){
        // for coloum
        cout<<" "<<count;
        count = count+1; 
    }cout<<endl;

}*/











    return 0;
}