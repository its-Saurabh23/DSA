 #include<bits/stdc++.h>
 using namespace std;
 
 
 void print(int n){
     if(n<0){
         return;
     }
     print(n-1);
     std::cout << n <<'\n';
 }
 
 int main(){
     int n ;
     cin>>n;
     print(n);
 }