#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {

int a =sizeof(input1);

sort(input1,input1+a);
sort(input2,input2+a);

for(int i=0;i<a;i++)

{

if(input1[i]!=input2[i])

return false;

}

return true;

}
     

int main() {
  int size = 1e6;
  char str1[size];
  char str2[size];
  cin >> str1 >> str2;
  cout << (isPermutation(str1, str2) ? "true" : "false");
}