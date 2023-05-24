#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your countBits function here
    int countBits(int n){
       int ans = 0;
        while(n>0){
            ans += (n & 1);
            // if you do || or operation then you get total number of bits... in the decimal value..
              n/=2;
        }
        return ans;
    }

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}