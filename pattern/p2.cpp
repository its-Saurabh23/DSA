#include<bits/stdc++.h>
using namespace std;

int main(){

int n = 4;


for(int i=1 ;i<=n;i++){
    // row ke liye
    int space = n-i+1;
    for(int j = 1;j<=i-1; j++){
        cout<<" ";
    }
    for(int k = 1;k<space;k++){
        cout<<"*";
    }
    cout<<endl;
}



/*
 for(int i =1; i<=n; i++){
    // row ke liye 
     for(int j = 1; j<=n-i+1; j++){
        cout<<"*";
     }cout<<endl;
 }

 
for(int i = 4;i>0;i--){
// row ke liye
for(int j = 1; j<=i; j++){
  cout<<"*";
}cout<<endl;
}

for(int i =1; i<=n;i++){
    int sapce = n-i; 
    for(int j =1; j<=sapce; j++){
        cout<<" ";
    }
    for(int k =1 ; k<i;k++){
        cout<<"*";
    }cout<<endl;
}


for(int i = 1;i<=n; i++){
    // row ke liye
    char ch ='A'+i-1; 
    for(int j =1; j<=n; j++){
        cout<<" "<<ch;
        ch++;
    }cout<<endl;
}


for(int i =1; i<=n;i++){
    // row kw liye 
    char start = 'A'+n-i;
    for(int j = 1; j<=i;j++){
      cout<<" "<<start;
      start = start+1;
    }cout<<endl;
}

for(int i =1; i<=n; i++){
    // For row ke liye
    int cnt = i;
    for(int j =1; j<=i; j++){
       
       cout<<" "<<cnt  ;
       cnt = cnt+1;
    }cout<<endl;
}


*/


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