#include<iostream>
using namespace std;

int main(){

int n = 3;

char ch ='A';
for(int i =1; i<=n;i++){
    // rows ke liye
   
    for(int j = 1;j<=n;j++){
    cout<<" "<<ch;
    ch = ch+1;
    }
       
    cout<<endl;
  } 
/*
for(int i = 1; i<=n; i++){

    for(int j = 1; j<=n; j++){
     char ch ='A'+j-1; 
     cout<<ch;
    }cout<<endl;
}



for(int i = 1; i<=n; i++){
//   for rows 
//   int cnt = i;
   for(int j = 1; j<=i ;j++){

    cout<<" "<<i-j+1;
    // cout<<" "<<cnt;
    // cnt =  cnt-1;
   }cout<<endl;
}
*/

    return 0;
}