#include<iostream>
using namespace std;

int main(){
int n = 4; 

for(int i = 1;i<=n; i++){
    // roe ke liye 

    for(int j =1;j<=i; j++){
        cout<<i;
    }cout<<endl;
}


/*

for(int i = 0;i<n; i++){
//    rows ke liye
for(int j = 0; j<=i; j++){
    cout<<"*";
}cout<<endl;

}


int cnt = 1;
for(int i  = 1; i<=n; i++){ 
    // rows cover
    for(int j = 1; j<=n; j++){
        // columns cover..
        cout<<cnt;
        cnt =  cnt+1;
    }
    cout<<endl;
}



for(int i = 1; i<=n; i++){
    // for(int j = n; j>=1; j--){
    //     cout<<j; }
    for(int j = 1;j<=n; j++){
       
       cout<<n-j+1;
    }
    cout<<endl;
}




for(int i =1; i<=n; i++){
 
 for(int j = 1; j<=n; j++){
    cout<<j;
 }cout<<endl;
}
*/

    return 0;
}

