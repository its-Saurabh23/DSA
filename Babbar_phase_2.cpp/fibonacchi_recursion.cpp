#include<bits/stdc++.h>
using namespace std;


int fibo(int n ){
//   base Condition
    if(n == 0){
        return 0;
    }
    else if(n ==1){
        return 1;
    }
    else{
        return fibo(n -1)+fibo(n-2);
    }
}
int main(){


int n;
cin>>n;
cout<<endl;
cout<<endl;
for(int i = 0; i<n; i++){
    cout<<fibo(i)<<endl;
}
    return  0;
}