#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

//Write your totalPrime function here
int  totalPrime(int S, int E){
 int ans=0;
 for(int i = S; i<E ;i++){
    if(i%S == 0 ){
     ans++;
     break;
    }

  }
  return ans;

}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}