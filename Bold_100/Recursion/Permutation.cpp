// A permutation is a Sequence of arragement or ordering of elements
// eg {1,2} can we arrage as {1,2} {2,1}  factorial of that thing 

#include<bits/stdc++.h>
using namespace std;



int main(){
  vector<int>nums={1,2,3};
  cout<<"Brute force Apporch"<<"\n";
  
  for(int i = 0; i<nums.size(); i++){
        for(int j = 0; j<nums.size(); j++){
          for(int k = 0; k<nums.size(); k++){
               if(i != j && j !=k && i != k){
                  cout<<"{"<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<" }\n";
               }
          }
        }
    }
   return 0;
}