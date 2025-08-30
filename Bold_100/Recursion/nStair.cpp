#include<bits/stdc++.h>
using namespace std;


int  totalStairCount(int n){
    if(n<=1){
     return 1;
    }
    return totalStairCount(n-1) + totalStairCount(n-2);
}
int main(){

    int num;
    cin>>num;
    int result  = totalStairCount(num);
    cout<<result<<endl;
}