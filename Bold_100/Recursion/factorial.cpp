#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    // Base case
    if(num == 1){
        return num ;
    }
    return num * factorial(num-1);
    
    
}

int main(){
    
 int num;
 int ans;
 

 bool flag = false;
 char ch;
 
 do{
    cout<<"Enter a Number for  factorial "<<endl;
    cin>>num;
    
 if(num>0){
    ans = factorial(num);
    cout<<"factorial of "<<num<<"is "<<ans<<endl;
    
    cout<<"Do you want to exit Program or Not  Type (y:yes n:no)";
    cin>>ch;
    
    
    switch(ch){
        
        case 'y':
        return 0;
        
        case 'n':
        flag = true;
        continue;
        
        default:
        cout<<"You Enterd Wring key"<<endl;
        return 0;
    }  
  }else if(num == 0){
    cout<<"Factorial of "<<num <<" is "<<"0"<<endl;
      return 0;
  }else{
    cout<<"Your value is "<<num<<" This is Negative value"<<endl;
  }
 }while(flag);

    return 0;
}