 #include<bits/stdc++.h>
 using namespace std;
 
 
 int GCD(int num1,int num2){
     
     if(num2 == 0){
          return num1;
     }
    return GCD(num2,num1%num2); 
 }
 
 
 
 int main(){
     
     int num1,num2;
     cout<<"Enter first Number"<<endl;
     std::cin >> num1;
     cout<<"ENter another Number"<<endl;
     cin>>num2;
     
     
     int result = GCD(num1,num2);
     cout<<"GCD of given Number "<<result<<endl;
     return 0;
 }