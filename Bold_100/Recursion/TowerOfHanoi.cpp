#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char from_rod,char to_rod,char aux){

    // Base case 
    if(n == 0)return;
    towerOfHanoi(n-1,from_rod,aux,to_rod);
}

int main(){
    int N = 3;
    towerOfHanoi(N,'A','C','B');
    return 0;
}