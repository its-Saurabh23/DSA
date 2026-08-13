#include <bits/stdc++.h>
using namespace std;


void solve(const vector<int>&V){
    long long xor_all = 0;
    
    for(int num:V){
        xor_all ^= num;
    }
       
       // xor_all binary 101
    std::cout<<bitset<8>(xor_all)<<endl;
    std::cout<<hex<<xor_all<<endl;
    std::cout<<xor_all;
}

int main()
{
    std::vector<int>V = {1,2,3,4,1,2,3,4,5};
    solve(V);
    return 0;
}
