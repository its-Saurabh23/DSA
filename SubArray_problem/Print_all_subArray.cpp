#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::vector<int> v={2,3,-2,4};
    for(int i = 0; i<v.size();i++){
        
        for(int j = i+1; j<=v.size(); j++){
              
              for(int k = i; k<j; k++){
                  cout<<"{"<< v[k] <<"}";
              }cout<<endl;
        }
    }

    return 0;
}