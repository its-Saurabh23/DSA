#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>res;

bool isvalid(vector<string>curr){
    
    int count = 0;
    for(size_t i =0; i<curr.size(); i++){
        if(curr[i] == "("){
           count++;
        }
        else{
            count--;
        }
        if(count<0){
            return false;
        }
    }
    return count == 0;
}

void solve(vector<string>&curr,int n){
 //Base Case
  if(curr.size() == 2*n){
      if(isvalid(curr)){
        res.push_back(curr);
    }
    return;
  }
  curr.push_back("(");
  solve(curr,n);

  curr.pop_back();
  
  curr.push_back(")");
 solve(curr,n);
 curr.pop_back();
}

int main(){
    vector<string>curr;
    int n = 2;
    solve(curr,n);
    
    for (int i = 0; i<res.size(); i++)
    {  
        for(int j = 0; j<res[i].size(); j++){
            cout<<res[i][j];
        }cout<<"\n";
        
    }
    
    return 0;
}