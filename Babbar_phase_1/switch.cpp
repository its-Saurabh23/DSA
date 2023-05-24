#include<iostream>
using namespace std;
int main(){

// char  ch ='1';
// int num = 1;
//  cout<<endl;
// switch(ch){

//     case 1: cout<<"First"<<endl;
//     cout<<"First agin"<<endl;
//                break;
//     case '1': switch (num){
//        case 1: cout<<" Value of num is "<<num<<endl;
//         break;
//     }
//                break;
//     default: cout<<"It is defaut case"<<endl;
// }

int a,b;
char ch;
cout<<"Ente the value of a "<<endl;
cin>>a;

cout<<"Enter the value of b "<<endl;
cin>>b;
cout<<"Enter the Operation you want to perform "<<endl;
cin>>ch;
cout<<endl;

switch(ch){
    case '+':cout<<(a+b)<<endl;
    break;
    case '-':cout<<(a-b)<<endl;
    break;
    case '*':cout<<(a*b)<<endl;
    break;
    case '/': cout<<(a/b)<<endl;
    break;
    default: cout<<"Enter a valid operation "<<endl;
}







    
    
    
    
    
    
    
    
    return 0;

}