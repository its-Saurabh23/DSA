#include<bits/stdc++.h>
using namespace std;

string solve(string str,int len,string result){
   
    if(len<0){
      return result;
    }
    return solve(str,len-1, result+str.at(len));

}

int main(){

    cout<<"Enter the string for revers"<<endl;
    string str;
    cin>>str;
     
    string result ="";
    
    // cout<<str.length()<<endl;
    // cout<<str.size()<<endl;
    // int n = str.length()-1;
    // int n =  str.size()-1;
    // cout<<str.at(n)<<endl;

    cout<<"Reverse string"<<endl;
    string ans = solve(str,str.length()-1,result);
    cout<<ans<<endl;

    return 0;
}


 #include<bits/stdc++.h>
 using namespace std;
 
   void reverse_String(string &str,int s,int n){
       // Base case
       if(s>=n){
         return;
       }
       
       swap(str[s],str[n]);
       reverse_String(str,s+1,n-1);
   }
 
 
 int main(){
    string str;
    std::cout << "Reverse String" << std::endl;
    std::cin >> str;
    int length = str.length();
    
    reverse_String(str,0,length-1);
    cout<<"After Reversing String "<<'\n'<<str <<'\n';
 }