#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char from_rod,char to_rod,char aux){

    // Base case 1
    if(n == 0)return;
    towerOfHanoi(n-1,from_rod,aux,to_rod);
    cout<<"move disk"<<n<<"from rod"<<from_rod<<"to road"<<to_rod<<;
    towerOfHanoi(n-1,aux,to_rod,from_rod);
}

int main(){
    int N = 3;
    towerOfHanoi(N,'A','C','B');
    return 0;
}