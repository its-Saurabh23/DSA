#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string &str, string &word){
  vector<int>arr(26,0);

 for(char c:str)arr.push_back(str['a'-c])++;
 for(char c:word)arr.push_back(word'a'-c])--;

  for(int i=0;i<arr.size(); i++){
        if(arr[i]>1){
           return false;
          }
      }
   return true;

}
int solve(string &text, string &word){

  string str = "";
    
}
int main(){
   
  string text = "gotxxotogatog";
  string word = "got";
  int count = solve(text, word);
   cout<<count<<endl;
    
    return 0;
}