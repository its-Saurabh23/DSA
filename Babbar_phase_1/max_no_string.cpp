#include<iostream>
using namespace std;

char getMaxOCharacter(string s ){
  int arr[26]={0};
  for(int i =0; i<s.length(); i++){
     char ch  = s[i];  
    
     int number = 0;
    //  aye neche bali line
     number = ch -'a'; 
     arr[number]++; 
    //  samjhn nhi aya
  }

//   MAxi occurance of Cahracter
int maxi = -1, ans = 0;
for(int i =0; i<26; i++){
    if(maxi<arr[i]){
        ans = i;
        maxi = arr[i];
    }
}
return 'a'+ ans;
}

int main(){

 string s;
 cin>>s; 
cout<<getMaxOCharacter(s)<<endl;

    return 0;
}