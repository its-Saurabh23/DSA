#include<bits/stdc++.h>
using namespace std;
int ArmstrongNum(int num,int cnt){
    
    int val = num; int rem ,ans = 0;
    while(num){
        rem = num %10;
        num /= 10;
        ans = ans + pow(rem,cnt); 
    }
    
    if(ans == val){
        return true;
    }
    
    return false;
}

int coutnDigit(int num){
    int cnt = 0;
    
    while(num){
        cnt++;
        num /=  10;
    }
    return cnt;
}

int main(){
    
    int num;
    cin>>num;
    int ans =  coutnDigit(num);
    
    cout<<ArmstrongNum(num,ans);
    return 0;
}